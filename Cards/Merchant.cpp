//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Merchant.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Merchant::Merchant(std::string m_name, int m_heal, int m_buff, int m_healCost, int m_buffCost) : Card()
{}


Card* Merchant::clone() const
{
    return new Merchant(*this);
}


void Merchant::applyEncounter(Player& player) const {
    printMerchantInitialMessageForInteractiveEncounter(cout, player.getName(), player.getCoins());
    
    std::string choice;
    std::getline(std::cin, stoi(choice));
    int type;
    int cost;

    if (choice == 0)
    {
        type = 0;
        cost = 0;
    }
    else if (choice == 1)
    {
        if (!player.pay(m_healCost))
        {
            printMerchantInsufficientCoins(cout);
        }
        player.heal(m_heal);
        type = 1;
        cost = m_healCost;
    }
    else if (choice == 2)
    {
        if (!player.pay(m_buffCost))
        {
            printMerchantInsufficientCoins(cout);
        }
        player.buff(m_buff);
        type = 2;
        cost = m_buffCost;
    }
    else {
        printInvalidInput();
    }
    printMerchantSummary(cout, player.getName(), type, cost);
}


std::ostream& Merchant::print(std::ostream &out) const
{
    printCardDetails(out,m_name);
    printEndOfCardDetails(out);
    return out;
}

