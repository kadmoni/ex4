
#include "Merchant.h"
#include "utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"
using std::cout;
using std::endl;

const std::string Merchant::TYPE = "Merchant";


Merchant::Merchant() : Card(),
    m_heal(1),
    m_buff(1),
    m_healCost(5),
    m_buffCost(10)
{}



void Merchant::applyEncounter(Player& player) const {
    printMerchantInitialMessageForInteractiveEncounter(cout, player.getName(), player.getCoins());
    
    std::string answer;
    std::getline(std::cin, answer);
    int choice = stoi(answer);

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
    printCardDetails(out,Merchant::TYPE);
    printEndOfCardDetails(out);
    return out;
}

