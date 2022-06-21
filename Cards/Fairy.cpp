

#include "Fairy.h"
#include "../Players/Wizard.h"
#include "utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"

using std::cout;
using std::endl;

const std::string Fairy::TYPE = "Fairy";


Fairy::Fairy() : Card(),
    m_heal(Fairy::fairyHeal)
{}


void Fairy::applyEncounter(Player& player) const {
    Wizard* ptr = dynamic_cast<Wizard*>(&player);
    bool isWizard = ptr != nullptr;
    printFairyMessage(isWizard);
    if (!isWizard) {
        return;
    }
    player.heal(m_heal);
}

std::ostream& Fairy::print(std::ostream &out) const
{
    printCardDetails(out,Fairy::TYPE);
    printEndOfCardDetails(out);
    return out;
}

