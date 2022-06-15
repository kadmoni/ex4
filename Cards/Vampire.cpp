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
    if (this->m_effect == CardType::Battle)
    {
        bool win = player.getAttackStrength() >= this->m_stats.force;
        if (win)
        {
            int loot = this->m_stats.loot;
            negativeCheck(loot);
            player.levelUp();
            player.addCoins(loot);
        }

        else
        {
            int damage = this->m_stats.hpLossOnDefeat;
            negativeCheck(damage);
            player.damage(damage);
        }

        printBattleResult(win);
    }
    else if (this->m_effect == CardType::Buff)
    {
        int cost = this->m_stats.cost;
        negativeCheck(cost);
        if (!player.pay(cost))
        {
            cout << "Not enough coins" << endl;
        }

        int buff = this->m_stats.buff;
        negativeCheck(buff);
        player.buff(buff);
    }
    else if (this->m_effect == CardType::Heal)
    {
        int cost = this->m_stats.cost;
        negativeCheck(cost);
        if (!player.pay(cost))
        {
            cout << "Not enough coins" << endl;
        }

        int heal = this->m_stats.heal;
        negativeCheck(heal);
        player.heal(heal);
    }
    else if (this->m_effect == CardType::Treasure)
    {
        int loot = this->m_stats.loot;
        negativeCheck(loot);
        player.addCoins(loot);
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