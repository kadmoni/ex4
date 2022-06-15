
#include "Fighter.h"
#include "utilities.h"

const std::string Fighter::JOB = "Fighter";

Fighter::Fighter(std::string name): Player(name)
{}

Player* Fighter::clone() const
{
    return new Fighter(*this);
}

int Fighter::getAttackStrength() const
{
    return this->m_level+this->m_force*MULTIPLIER;
}

std::ostream& operator<<(std::ostream& out,const Fighter& fighter)
{
    printPlayerDetails(out,fighter.m_name,Fighter::JOB,fighter.m_level,fighter.m_force,fighter.m_hp,fighter.m_coins);
    return out;
}



