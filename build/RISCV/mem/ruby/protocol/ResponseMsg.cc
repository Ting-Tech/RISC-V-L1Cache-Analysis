/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /Users/hao/Playground/gem5/src/mem/slicc/symbols/Type.py:501
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/ResponseMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
ResponseMsg::print(std::ostream& out) const
{
    out << "[ResponseMsg: ";
    out << "addr = " << printAddress(m_addr) << " ";
    out << "Type = " << m_Type << " ";
    out << "Sender = " << m_Sender << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "]";
}
bool
ResponseMsg::functionalRead(Packet* param_pkt)
{
return (testAndRead(m_addr, m_DataBlk, param_pkt));

}
bool
ResponseMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_addr, m_DataBlk, param_pkt));

}
} // namespace ruby
} // namespace gem5
