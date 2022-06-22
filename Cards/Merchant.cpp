
#include "Merchant.h"
#include "../utilities.h"
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

    int choice = 3;
    do {
        std::string answer;
        try{
            std::getline(std::cin, answer);
            choice = stoi(answer);
        }
        catch(const std::exception& e){
            printInvalidInput();
            continue;
        }
        if (choice != 0 && choice != 1 && choice != 2)
        {
            printInvalidInput();
        }
    } while (choice != 0 && choice != 1 && choice != 2);

    int type = 3;
    int cost = 0;

    if (choice == 0)
    {
        type = 0;
        cost = 0;
    }
    else if (choice == 1)
    {
        type = 1;
        if (player.pay(m_healCost))
        {
            player.heal(m_heal);
	    cost = m_healCost;
        }
        else
        {
            printMerchantInsufficientCoins(cout);
        }
    }
    else if (choice == 2)
    {
        type = 2;
        if (player.pay(m_buffCost))
        {
            cost = m_buffCost;
            player.buff(m_buff);
        }
        else
        {
            printMerchantInsufficientCoins(cout);
        }
    }
    printMerchantSummary(cout, player.getName(), type, cost);
}


std::ostream& Merchant::print(std::ostream &out) const
{
    printCardDetails(out,Merchant::TYPE);
    printEndOfCardDetails(out);
    return out;
}

