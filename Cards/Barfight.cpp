//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;
void negativeCheck(int& a);

Rogue::Rogue(std::string name) : Player(name)
{}

Barfight::Barfight() : {}


void Card::applyEncounter(Player& player) const {
    Fighter* ptr = dynamic_cast<Fighter*>(&player);
    bool isFighter = ptr != nullptr;
    if (!isFighter) {
        player.damage(10);
    }
    printBarfightMessage(isFighter);
}

//
//void Card::printInfo() const {
//    if (this->m_effect == CardType::Battle)
//    {
//        printBattleCardInfo(m_stats);
//    }
//    else if (this->m_effect == CardType::Buff)
//    {
//        printBuffCardInfo(m_stats);
//    }
//    else if (this->m_effect == CardType::Heal)
//    {
//        printHealCardInfo(m_stats);
//    }
//    else if (this->m_effect == CardType::Treasure)
//    {
//        printTreasureCardInfo(m_stats);
//    }
//}

void negativeCheck(int& a) {
    if (a < 0)
    {
        a = 0;
    }
}
