
#include "Merchant.h"
#include "../utilities.h"
#include <iostream>
#include "Card.h"
#include "../Players/Player.h"
using std::cout;
using std::endl;

const std::string Merchant::TYPE = "Merchant";


Merchant::Merchant() : Card(),
    m_heal(Merchant::healMerch),
    m_buff(Merchant::buffMerch),
    m_healCost(Merchant::healCost),
    m_buffCost(Merchant::buffCost)
{}



void Merchant::applyEncounter(Player& player) const {
    printMerchantInitialMessageForInteractiveEncounter(cout, player.getName(), player.getCoins());
    int choice = Merchant::choiceInit;
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
        if (choice != Merchant::noChoice && choice != Merchant::choiceHeal && choice != Merchant::choiceBuff)
        {
            printInvalidInput();
        }
    } while (choice != Merchant::noChoice && choice != Merchant::choiceHeal && choice != Merchant::choiceBuff);
    merchantChoice(player, choice);
}

void Merchant::merchantChoice(Player& player, int choice) const {
    int type = Merchant::choiceInit;
    int cost = 0;

    if (choice == Merchant::noChoice)
    {
        type = Merchant::noChoice;
        cost = Merchant::noChoice;
    }
    else if (choice == Merchant::choiceHeal)
    {
        type = Merchant::choiceHeal;
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
    else if (choice == Merchant::choiceBuff)
    {
        type = Merchant::choiceBuff;
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

