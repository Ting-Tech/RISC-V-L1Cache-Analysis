require 'fileutils'

def run_simulation(l1i_size, l1i_assoc, l1d_size, l1d_assoc, cacheline_size, output_dir)
  FileUtils.mkdir_p(output_dir)
  system("../build/RISCV/gem5.opt ../configs/deprecated/example/se.py " \
         "--caches --l1i_size=#{l1i_size} --l1i_assoc=#{l1i_assoc} " \
         "--l1d_size=#{l1d_size} --l1d_assoc=#{l1d_assoc} " \
         "--cacheline_size=#{cacheline_size} " \
         "-c ./main " \
         "> #{output_dir}/gem5.log 2>&1")
  FileUtils.cp('m5out/stats.txt', "#{output_dir}/stats.txt")
  FileUtils.cp('m5out/config.ini', "#{output_dir}/config.ini")
end

def extract_miss_rate(stats_file)
  dcache_misses = `grep "system.cpu.dcache.overallMisses::total" #{stats_file}`.split[1]
  icache_misses = `grep "system.cpu.icache.overallMisses::total" #{stats_file}`.split[1]
  dcache_accesses = `grep "system.cpu.dcache.overallAccesses::total" #{stats_file}`.split[1]
  icache_accesses = `grep "system.cpu.icache.overallAccesses::total" #{stats_file}`.split[1]

  if [dcache_misses, icache_misses, dcache_accesses, icache_accesses].any?(&:nil?)
    raise "Error: Failed to extract miss or access rates from #{stats_file}."
  end

  dcache_miss_rate = dcache_misses.to_f / dcache_accesses.to_f
  icache_miss_rate = icache_misses.to_f / icache_accesses.to_f

  [dcache_miss_rate, icache_miss_rate]
end

# 基準配置
run_simulation("8kB", 2, "8kB", 2, 64, "m5out/base")

# 修改 cacheline_size 配置 (8~256)
cacheline_sizes = [8, 16, 32, 128, 256]
cacheline_sizes.each do |cacheline_size|
  run_simulation("8kB", 2, "8kB", 2, cacheline_size, "m5out/cacheline_size=#{cacheline_size}")
end

# 基準配置的未命中率
base_rates = extract_miss_rate("m5out/base/stats.txt")
base_dcache_miss_rate = base_rates[0]
base_icache_miss_rate = base_rates[1]

# 打印表格標題
puts "| Cacheline Size | Data Cache Miss Rate Growth (%) | Instruction Cache Miss Rate Growth (%) |"
puts "| -------------- | ------------------------------- | -------------------------------------- |"

# 比較不同配置的未命中率
cacheline_sizes.each do |cacheline_size|
  rates = extract_miss_rate("m5out/cacheline_size=#{cacheline_size}/stats.txt")
  dcache_miss_rate = rates[0]
  icache_miss_rate = rates[1]
  dcache_miss_growth = ((dcache_miss_rate - base_dcache_miss_rate) / base_dcache_miss_rate * 100).round(2)
  icache_miss_growth = ((icache_miss_rate - base_icache_miss_rate) / base_icache_miss_rate * 100).round(2)

  # 格式化輸出以對齊隔線
  puts "| #{cacheline_size.to_s.ljust(14)} | #{dcache_miss_growth.to_s.ljust(31)} | #{icache_miss_growth.to_s.ljust(38)} |"
end
