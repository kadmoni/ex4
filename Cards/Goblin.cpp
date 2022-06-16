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


Card::Card(CardType type, const CardStats& stats) :
    m_effect(type),
    m_stats(stats)
{}


void Card::applyEncounter(Player& player) const {
    bool win = player.getAttackStrength() >= 6;
    if (win)
    {
        player.levelUp();
        player.addCoins(2);
        printWinBattle(player.getName(), "Goblin");

    }
    else
    {
        player.damage(10);
        printLossBattle(player.getName(), "Goblin");

    }
}


void Card::printInfo() const {
    if (this->m_effect == CardType::Battle)
    {
        printBattleCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Buff)
    {
        printBuffCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Heal)
    {
        printHealCardInfo(m_stats);
    }
    else if (this->m_effect == CardType::Treasure)
    {
        printTreasureCardInfo(m_stats);
    }
}

void negativeCheck(int& a) {
    if (a < 0)
    {
        a = 0;
    }
}
