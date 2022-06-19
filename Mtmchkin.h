#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_
#include "PLayers/Player.h"
#include <deque>
#include <queue>
#include <memory>
#include "Cards/Card.h"

class Mtmchkin{

public:

    /*
    * C'tor of Mtmchkin class
    *
    * @param filename - a file which contains the cards of the deck.
    * @return
    *      A new instance of Mtmchkin.
    */
    Mtmchkin(const std::string fileName);

    /*
    * Play the next Round of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void playRound();

    /*
    * Prints the leaderBoard of the game at a given stage of the game - according to the instruction in the exercise document.
    *
    * @return
    *      void
    */
    void printLeaderBoard() const;

    /*
    *  Checks if the game ended:
    *
    *  @return
    *          True if the game ended
    *          False otherwise
    */
    bool isGameOver() const;

    /*
    *  Returns the number of rounds played.
    *
    *  @return
    *          int - number of rounds played
    */
    int getNumberOfRounds() const;


private:
    std::vector<std::unique_ptr<Player>> m_activePlayers;
    std::vector<std::unique_ptr<Player>> m_winners;
    std::deque<std::unique_ptr<Player>> m_losers;
    std::queue<std::unique_ptr<Card>> m_deck;
    int m_numOfRounds;
};

bool checkName (std::string name);
bool createPlayer(std::string name, std::string job, const std::vector<std::unique_ptr<Player>>& activePlayers);
void createDeck(std::queue<std::unique_ptr<Card>>& m_deck, const std::string fileName);



#endif /* MTMCHKIN_H_ */