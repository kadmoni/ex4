#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_
#include "PLayers/Player.h"
#include <deque>
#include <queue>
#include <memory>
#include "Cards/Card.h"

/*
 * manages the game Mtmchkin
 */
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
/*
 * checks if the name provided follows the provided rules (english letters only, up to 15 characters)
 *
 * @param name - the name scanned from the user
 * @return
 *      true - the name follows the rules
 *      false - the name does not follow the rules
 */
bool checkName (std::string name);

/*
 * creates a unique pointer to an appropriate subclass of Player according to user input, and places it in a vector
 *
 * @param activePlayers - a vector to which Player subclass unique pointers will be added
 * @return
 *      true - the Player cannot be created according to the rules
 *      false - the Player was created according to the rules
 */
bool createPlayer(std::vector<std::unique_ptr<Player>>& activePlayers);

/*
 * creates a queue of unique pointers to Card subclasses from a provided file
 * (in each line in the file there should be a single word corresponding to a Card subclass, otherwise an exception is thrown)
 *
 * @param m_deck - a queue of unique pointers to the Cards in the game
 * @param fileName - the name of the file from which the Card types will be drawn
 * @return
 *      void
 */
void createDeck(std::queue<std::unique_ptr<Card>>& m_deck, const std::string fileName);

/*
 * gets the team size from the user and checks if it follows the provided rules (2-6 players)
 *
 * @param teamSize - the teamSize scanned from the user
 */
void teamSizeInput (int& teamSize);



#endif /* MTMCHKIN_H_ */