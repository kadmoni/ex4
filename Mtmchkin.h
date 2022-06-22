#ifndef MTMCHKIN_H_
#define MTMCHKIN_H_
#include "Players/Player.h"
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

    static const int minTeamSize = 2;
    static const int maxTeamSize = 6;
    static const int minDeckSize = 5;
    static const int maxNameLength = 15;
    static const int maxLevel = 10;


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

/*
 * adds a monster type Card to the deck
 *
 * @param m_deck - queue of pointers to Cards to which the monster will be added
 * @param tampCard - the current type of card read from the file to be added to the deck
 * @param deckSize - the current size of the deck
 * @param deckLine - the current line from which the type of card is read from the file
 */
void addMonster (std::queue<std::unique_ptr<Card>>& m_deck,std::string& tempCard,int& deckSize,int& deckLine);

/*
 * adds an NPC type Card to the deck
 *
 * @param m_deck - queue of pointers to Cards to which the NPC encounter will be added
 * @param tampCard - the current type of card read from the file to be added to the deck
 * @param deckSize - the current size of the deck
 * @param deckLine - the current line from which the type of card is read from the file
 */
void addNpcEncounter (std::queue<std::unique_ptr<Card>>& m_deck,std::string& tempCard,int& deckSize,int& deckLine);

/*
 * adds an economy type Card to the deck
 *
 * @param m_deck - queue of pointers to Cards to which the economy will be added
 * @param tampCard - the current type of card read from the file to be added to the deck
 * @param deckSize - the current size of the deck
 * @param deckLine - the current line from which the type of card is read from the file
 */
void addEconomy (std::queue<std::unique_ptr<Card>>& m_deck,std::string& tempCard,int& deckSize,int& deckLine);





#endif /* MTMCHKIN_H_ */