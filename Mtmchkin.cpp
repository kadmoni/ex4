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
#include "Cards/Gang.h"

Mtmchkin::Mtmchkin(const std::string fileName): m_numOfRounds(0)
{
    int teamSize=0;
    printStartGameMessage();
    createDeck(m_deck,fileName);
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
    int playersSize = m_activePlayers.size();
    printRoundStartMessage(this->getNumberOfRounds());
    for (int i = 0; i<playersSize ;i++)
    {
        printTurnStartMessage(m_activePlayers[i]->getName());
        m_deck.front()->applyEncounter(*(m_activePlayers[i]));
        if (m_activePlayers[i]->getLevel()>=Mtmchkin::maxLevel)
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
        playersSize = m_activePlayers.size();
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
    int winnersSize = m_winners.size();
    for (int i=0;i<winnersSize;i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_winners[i]));
    }
    int activeSize = m_activePlayers.size();
    for (int i = 0;i<activeSize ;i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_activePlayers[i]));
    }
    int losersSize = m_losers.size();
    for (int i = 0;i<losersSize ;i++)
    {
        rank++;
        printPlayerLeaderBoard(rank,*(m_losers[i]));
    }
}

bool checkName (std::string name)
{
    int nameSize = name.size();
    for (int i=0;i<nameSize;i++)
    {
        if ((nameSize > Mtmchkin::maxNameLength) || (std::isalpha(name[i]) == 0))
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
        m_activePlayers.push_back(std::unique_ptr<Player>(new Wizard(name)));
    }
    else if (job == Fighter::JOB)
    {
        m_activePlayers.push_back(std::unique_ptr<Player>(new Fighter(name)));
    }
    else if (job == Rogue::JOB)
    {
        m_activePlayers.push_back(std::unique_ptr<Player>(new Rogue(name)));
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
    int deckSize =0;
    int deckLine =1;
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
            m_deck.push(std::unique_ptr<Card>(new Dragon()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Vampire::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Vampire()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Goblin::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Goblin()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Barfight::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Barfight()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Pitfall::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Pitfall()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Fairy::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Fairy()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Merchant::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Merchant()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Treasure::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Treasure()));
            deckSize ++;
            deckLine++;
        }
        else if (tempCard == Gang::TYPE)
        {
            m_deck.push(std::unique_ptr<Card>(new Gang(deck, ++deckLine)));
            deckSize++;
        }
        else
        {
            throw DeckFileFormatError(deckLine);
        }
    }
    if (deckSize<Mtmchkin::minDeckSize)
    {
        throw DeckFileInvalidSize();
    }
}

void teamSizeInput (int& teamSize)
{
    std::string temp;
    while((teamSize>Mtmchkin::maxTeamSize)||(teamSize<Mtmchkin::minTeamSize))
    {
        try{
	    printEnterTeamSizeMessage();
            std::getline(std::cin,temp);
            teamSize = std::stoi(temp);
        }
        catch(const std::exception& e){
            printInvalidTeamSize();
	    continue;
        }
	if ((teamSize>Mtmchkin::maxTeamSize)||(teamSize<Mtmchkin::minTeamSize))
	{
	    printInvalidTeamSize();
	}
    }
}

