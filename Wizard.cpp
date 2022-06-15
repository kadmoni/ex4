
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

std::ostream& operator<<(std::ostream& out,const Wizard& wizard)
{
    printPlayerDetails(out,wizard.m_name,Wizard::JOB,wizard.m_level,wizard.m_force,wizard.m_hp,wizard.m_coins);
    return out;
}



