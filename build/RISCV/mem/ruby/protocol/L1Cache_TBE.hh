/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /Users/hao/Playground/gem5/src/mem/slicc/symbols/Type.py:443
 */

#ifndef __L1Cache_TBE_HH__
#define __L1Cache_TBE_HH__

#include <iostream>

#include "mem/ruby/slicc_interface/RubySlicc_Util.hh"

#include "mem/ruby/protocol/L1Cache_State.hh"
#include "mem/ruby/protocol/DataBlock.hh"
namespace gem5
{

namespace ruby
{

class L1Cache_TBE
{
  public:
    L1Cache_TBE
()
		{
        m_TBEState = L1Cache_State_NUM;
         // default value of L1Cache_State
        // m_DataBlk has no default
    }
    L1Cache_TBE(const L1Cache_TBE&) = default;
    L1Cache_TBE
    &operator=(const L1Cache_TBE&) = default;
    L1Cache_TBE(const L1Cache_State& local_TBEState, const DataBlock& local_DataBlk)
    {
        m_TBEState = local_TBEState;
        m_DataBlk = local_DataBlk;
    }
    L1Cache_TBE*
    clone() const
    {
         return new L1Cache_TBE(*this);
    }
    // Const accessors methods for each field
    /** \brief Const accessor method for TBEState field.
     *  \return TBEState field
     */
    const L1Cache_State&
    getTBEState() const
    {
        return m_TBEState;
    }
    /** \brief Const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    const DataBlock&
    getDataBlk() const
    {
        return m_DataBlk;
    }
    // Non const Accessors methods for each field
    /** \brief Non-const accessor method for TBEState field.
     *  \return TBEState field
     */
    L1Cache_State&
    getTBEState()
    {
        return m_TBEState;
    }
    /** \brief Non-const accessor method for DataBlk field.
     *  \return DataBlk field
     */
    DataBlock&
    getDataBlk()
    {
        return m_DataBlk;
    }
    // Mutator methods for each field
    /** \brief Mutator method for TBEState field */
    void
    setTBEState(const L1Cache_State& local_TBEState)
    {
        m_TBEState = local_TBEState;
    }
    /** \brief Mutator method for DataBlk field */
    void
    setDataBlk(const DataBlock& local_DataBlk)
    {
        m_DataBlk = local_DataBlk;
    }
    void print(std::ostream& out) const;
  //private:
    /** Transient state */
    L1Cache_State m_TBEState;
    /** data for the block, required for concurrent writebacks */
    DataBlock m_DataBlk;
};
inline ::std::ostream&
operator<<(::std::ostream& out, const L1Cache_TBE& obj)
{
    obj.print(out);
    out << ::std::flush;
    return out;
}

} // namespace ruby
} // namespace gem5

#endif // __L1Cache_TBE_HH__
