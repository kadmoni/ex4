
#include "Wizard.h"
#include "utilities.h"

const std::string Wizard::JOB = "WIZARD";

Wizard::Wizard(std::string name): Player(name)
{
}

Player* Wizard::clone() const
{
    return new Wizard(*this);
}

void Wizard::heal(int amount)
{
    if (amount > 0)
    {
        this->m_hp += amount*MULTIPLIER;
        if (this->m_hp > this->m_maxHp)
        {
            this->m_hp = this->m_maxHp;
        }
    }
}

std::ostream& Wizard::print(std::ostream &out) const
{
    printPlayerDetails(out,m_name,Wizard::JOB,m_level,m_force,m_hp,m_coins);
    return out;
}



