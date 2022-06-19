#include <fstream>
#include "Mtmchkin.h"
#include "utilities.h"
#include "Wizard.h"
#include "Fighter.h"
#include "Player.h"
#include "Rogue.h"
#include "Card.h"
#include "Dragon.h"
#include "Vampire.h"
#include "Goblin.h"

Mtmchkin::Mtmchkin(const std::string fileName): m_numOfRounds(0)
{
    createDeck(m_deck,fileName);
    int teamSize=0;
    printStartGameMessage();
    printEnterTeamSizeMessage();
    std::cin >> teamSize;
    while ((teamSize>6)||(teamSize<2))
    {
        printInvalidTeamSize();
        printEnterTeamSizeMessage();
        std::cin>>teamSize;
    }
    for (int i=0;i<teamSize;i++)
    {
        std::string temp,name,job;
        printInsertPlayerMessage();
        std::cin >> temp;
        std::stringstream input(temp);
        std::getline(input,name,' ');
        std::getline(input,job);
        if (createPlayer(name,job,m_activePlayers)==false)
        {
            i--;
        }
    }
}

void Mtmchkin::playRound()
{
    printRoundStartMessage(this->getNumberOfRounds());
    for (int i = 0; i<m_activePlayers.size();i++)
    {
        printTurnStartMessage(m_activePlayers[i]->getName());
        m_deck.front()->applyEncounter(*(m_activePlayers[i]));
        if (m_activePlayers[i]->getLevel()>=10)
        {
            m_winners.push_back(std::move(m_activePlayers[i]));
            m_activePlayers.erase(m_activePlayers.begin()+i);
        }
        if(m_activePlayers[i]->isKnockedOut())
        {
            m_losers.push_front(std::move(m_activePlayers[i]));
            m_activePlayers.erase(m_activePlayers.begin()+i);
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

bool createPlayer(std::string name, std::string job, std::vector<std::unique_ptr<Player>>& m_activePlayers)
{
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
    std::string tempCard;
    std::ifstream deck(filename);
    //custom exceptions here
    while (std::getline(deck,tempCard))
    {
        if (tempCard == Dragon::TYPE)
        {
            m_deck.push(std::make_unique<Dragon>());
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_deck.push(std::make_unique<Vampire>());
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_deck.push(std::make_unique<Goblin>());
        }
        else
        {
            //invalid card throw
        }
    }
}


