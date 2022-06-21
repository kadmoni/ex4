
#include "Rogue.h"
#include "Player.h"
#include "../utilities.h"

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

std::ostream& Rogue::print(std::ostream &out) const
{
    printPlayerDetails(out,m_name,Rogue::JOB,m_level,m_force,m_hp,m_coins);
    return out;
}



