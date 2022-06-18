
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

std::ostream& Fighter::print(std::ostream &out) const
{
    printPlayerDetails(out,m_name,Fighter::JOB,m_level,m_force,m_hp,m_coins);
    return out;
}


