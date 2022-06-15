#include <fstream>
#include "Mtmchkin.h"
#include "utilities.h"

Mtmchkin::Mtmchkin(const std::string fileName): m_numOfRounds(0)
{
    int teamSize=0;
    std::ifstream deck(fileName);
    //custom exceptions here
    /*
     * create deck according to file
     */
    printStartGameMessage();
    printEnterTeamSizeMessage();
    std::cin >> teamSize;
    while ((teamSize>6)||(teamSize<2))
    {
        printInvalidTeamSize();
        printEnterTeamSizeMessage();
        std::cin>>teamSize;
    }
    printInsertPlayerMessage();


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


