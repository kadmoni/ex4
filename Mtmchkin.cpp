#include <fstream>
#include "Mtmchkin.h"
#include "utilities.h"
#include "Players/Wizard.h"
#include "Players/Fighter.h"
#include "Players/Player.h"
#include "Players/Rogue.h"

#include "Cards/Dragon.h"
#include "Cards/Vampire.h"
#include "Cards/Goblin.h"
#include "Cards/Barfight.h"
#include "Cards/Treasure.h"
#include "Cards/Merchant.h"
#include "Cards/Fairy.h"
#include "Cards/Pitfall.h"

Mtmchkin::Mtmchkin(const std::string fileName): m_numOfRounds(0)
{
    int teamSize=0;
    createDeck(m_deck,fileName);
    printStartGameMessage();
    teamSizeInput(teamSize);
    for (int i=0;i<teamSize;i++)
    {
        printInsertPlayerMessage();
        while (createPlayer(m_activePlayers)==false);
    }
}

void Mtmchkin::playRound()
{
    m_numOfRounds++;
    printRoundStartMessage(this->getNumberOfRounds());
    for (int i = 0; i<m_activePlayers.size();i++)
    {
        printTurnStartMessage(m_activePlayers[i]->getName());
        m_deck.front()->applyEncounter(*(m_activePlayers[i]));
        if (m_activePlayers[i]->getLevel()>=10)
        {
            m_winners.push_back(std::move(m_activePlayers[i]));
            m_activePlayers.erase(m_activePlayers.begin()+i);
            i--;
        }
        else if(m_activePlayers[i]->isKnockedOut())
        {
            m_losers.push_front(std::move(m_activePlayers[i]));
            m_activePlayers.erase(m_activePlayers.begin()+i);
            i--;
        }
        std::unique_ptr<Card> tempCard(std::move(m_deck.front()));
        m_deck.pop();
        m_deck.push(std::move(tempCard));
        if (isGameOver())
        {
            printGameEndMessage();
            break;
        }
    }
}




int Mtmchkin::getNumberOfRounds() const
{
    return m_numOfRounds;
}

bool Mtmchkin::isGameOver() const
{
    if (m_activePlayers.empty())
    {
        return true;
    }
    else
        return false;
}

void Mtmchkin::printLeaderBoard() const
{
    printLeaderBoardStartMessage();
    int rank=0;
    for (int i=0;i<m_winners.size();i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_winners[i]));
    }
    for (int i = 0;i<m_activePlayers.size();i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_activePlayers[i]));
    }
    for (int i = 0;i<m_losers.size();i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_losers[i]));
    }
}

bool checkName (std::string name)
{
    for (int i=0;i<name.size();i++)
    {
        if ((name.size() > 16) && (std::isalpha(name[i]) != 0))
        {
            printInvalidName();
            return false;
        }
    }
    return true;
}

bool createPlayer(std::vector<std::unique_ptr<Player>>& m_activePlayers)
{
    std::string name,job;
    std::getline(std::cin,name,' ');
    std::getline(std::cin,job);
    if (checkName(name) == false)
    {
        return false;
    }
    if (job == Wizard::JOB)
    {
        m_activePlayers.push_back(std::make_unique<Wizard>(name));
    }
    else if (job == Fighter::JOB)
    {
        m_activePlayers.push_back(std::make_unique<Fighter>(name));
    }
    else if (job == Rogue::JOB)
    {
        m_activePlayers.push_back(std::make_unique<Rogue>(name));
    }
    else
    {
        printInvalidClass();
        return false;
    }
    return true;

}

void createDeck (std::queue<std::unique_ptr<Card>>& m_deck,const std::string filename)
{
    int deckCount =0;
    std::string tempCard;
    std::ifstream deck(filename);
    if (!deck)
    {
        throw DeckFileNotFound();
    }
    while (std::getline(deck,tempCard))
    {
        if (tempCard == Dragon::TYPE)
        {
            m_deck.push(std::make_unique<Dragon>());
            deckCount ++;
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_deck.push(std::make_unique<Vampire>());
            deckCount ++;
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_deck.push(std::make_unique<Goblin>());
            deckCount ++;
        }
        else if (tempCard == Barfight::TYPE)
        {
            m_deck.push(std::make_unique<Barfight>());
            deckCount ++;
        }
        else if (tempCard == Pitfall::TYPE)
        {
            m_deck.push(std::make_unique<Pitfall>());
            deckCount ++;
        }
        else if (tempCard == Fairy::TYPE)
        {
            m_deck.push(std::make_unique<Fairy>());
            deckCount ++;
        }
        else if (tempCard == Merchant::TYPE)
        {
            m_deck.push(std::make_unique<Merchant>());
            deckCount ++;
        }
        else if (tempCard == Treasure::TYPE)
        {
            m_deck.push(std::make_unique<Treasure>());
            deckCount ++;
        }
        else
        {
            throw DeckFileFormatError(deckCount+1);
        }
    }
    if (deckCount<5)
    {
        throw DeckFileInvalidSize();
    }
}

void teamSizeInput (int& teamSize)
{
    std::string temp;
    printEnterTeamSizeMessage();
    std::getline(std::cin,temp);
    teamSize = std::stoi(temp);
    while ((teamSize>6)||(teamSize<2))
    {
        printInvalidTeamSize();
        printEnterTeamSizeMessage();
        std::cin>>teamSize;
    }
}


