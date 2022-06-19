//
// Created by Adi Tsach on 06/04/2022.
//


//#include "Card.h"
#include "Fairy.h"
//#include "Players/Player.h"
#include "Players/Wizard.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;

const std::string Fairy::TYPE = "Fairy";


Fairy::Fairy() : Card(),
    m_heal(10)
{}

Card* Fairy::clone() const
{
    return new Fairy(*this);
}

void Fairy::applyEncounter(Player& player) const {
    Wizard* ptr = dynamic_cast<Wizard*>(&player);
    bool isWizard = ptr != nullptr;
    if (!isWizard) {
        return;
    }
    player.heal(m_heal);
    printFairyMessage(isWizard);
}

std::ostream& Fairy::print(std::ostream &out) const
{
    printCardDetails(out,Fairy::TYPE);
    printEndOfCardDetails(out);
    return out;
}

