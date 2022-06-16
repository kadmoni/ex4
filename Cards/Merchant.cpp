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
    printMerchantInitialMessageForInteractiveEncounter(cout, player.getName(), player.getCoins());
    
    std::string choice;
    getline(cin, stoi(choice));
    int type;
    int cost;

    if (choice == 0)
    {
        type = 0;
        cost = 0;
    }
    else if (choice == 1)
    {
        if (!player.pay(5))
        {
            printMerchantInsufficientCoins(cout);
        }
        player.heal(1);
        type = 1;
        cost = 5;
    }
    else if (choice == 2)
    {
        if (!player.pay(10))
        {
            printMerchantInsufficientCoins(cout);
        }
        player.buff(1);
        type = 2;
        cost = 10;
    }
    else {
        printInvalidInput();
    }
    printMerchantSummary(cout, player.getName(), type, )
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
