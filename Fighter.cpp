
#include "Fighter.h"
#include "utilities.h"

Fighter::Fighter(std::string name): Player(name)
{}

Player* Fighter::clone() const
{
    return new Fighter(*this);
}

std::ostream& operator<<(std::ostream& out,const Fighter& fighter)
{
    printPlayerDetails(out,fighter.m_name,"Fighter",fighter.m_level,fighter.m_force,fighter.m_hp,fighter.m_coins);
    return out;
}



