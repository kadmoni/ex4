
#include "Wizard.h"
#include "utilities.h"

Wizard::Wizard(std::string name): Player(name)
{
}

Player* Wizard::clone() const
{
    return new Wizard(*this);
}

std::ostream& operator<<(std::ostream& out,const Wizard& wizard)
{
    printPlayerDetails(out,wizard.m_name,"Wizard",wizard.m_level,wizard.m_force,wizard.m_hp,wizard.m_coins);
    return out;
}



