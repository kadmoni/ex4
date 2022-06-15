
#include "Rogue.h"
#include "utilities.h"

const std::string Rogue::JOB = "Rogue";


Rogue::Rogue(std::string name) : Player(name)
{}

Player* Rogue::clone() const
{
    return new Rogue(*this);
}

void Rogue::addCoins(int amount)
{
    this->m_coins+= amount*MULTIPLIER;
}

std::ostream& operator<<(std::ostream& out,const Rogue& rogue)
{
    printPlayerDetails(out,rogue.m_name,Rogue::JOB,rogue.m_level,rogue.m_force,rogue.m_hp,rogue.m_coins);
    return out;
}



