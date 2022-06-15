
#include "Rogue.h"
#include "utilities.h"

Rogue::Rogue(std::string name) : Player(name)
{}

Player* Rogue::clone() const
{
    return new Rogue(*this);
}
std::ostream& operator<<(std::ostream& out,const Rogue& rogue)
{
    printPlayerDetails(out,rogue.m_name,"Rogue",rogue.m_level,rogue.m_force,rogue.m_hp,rogue.m_coins);
    return out;
}



