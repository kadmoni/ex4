
#ifndef EX2_PLAYER_H
#define EX2_PLAYER_H
#define IN_HP 100
#define IN_FORCE 5
#define IN_LEVEL 1
#define IN_COINS 0

#include <string>



class Player{
public:
    /*
     * C'tor for Player class:
     *
     * @param playerName - player name received from the user
     * @param hp - the max HP of the player
     * @param force - the starting force of the player
     * @param level - initial level (always starts from 1)
     * @param coins - initial amount of coins (always starts from 0)
     * @return
     *      A new instance of Player
     */
    Player(std::string playerName, int maxHp = IN_HP, int force = IN_FORCE);
    /*
     * Copy C'tor for class Player
     * default is used
     */
    Player(const Player &player) = default;

    /*
     * D'tor for class Player
     * default is used
     */
    virtual ~Player() = default;

    /*
     * allows assignment of Player to Player
     * default is used
     */
    Player& operator=(const Player&) = default;

    /*
     * prints the Player's info
     *
     * @return
     *      void
     */
    void printInfo() const;

    /*
     * adds 1 to the Player's level
     *
     * @return
     *      void
     */
    void levelUp();

    /*
     * returns the level of the Player
     *
     * @return
     *      the level of the player as int
     */
    int getLevel() const;

    /*
     * adds to the force of Player
     *
     * @param amount - the amount of force to be added to the Player
     * @return
     *      void
     */

    void buff(int amount);

    /*
     * adds to the hp of the Player
     *
     * @param amount - the amount of hp to be added to the Player
     * @return
     *      void
     */

    void heal(int amount);

    /*
     * reduces Player health
     *
     * @param amount - the amount of hp to be reduced from the Player
     * @return
     *      void
     */
    void damage(int amount);

    /*
     * returns if the Player's hp reduced to 0
     *
     * @return
     *      true - the Player's hp reduced to 0
     *      false - the Player's hp is above 0
     */
    bool isKnockedOut() const;

    /*
     * adds to the member coins of Player
     *
     * @param amount - the amount of coins to be added
     * @return
     *      void
     */
    void addCoins(int amount);

    /*
     * reduces coins from the Player if he has enough coins
     *
     * @param amount - the amount to be reduced from coins
     * @return
     *      true - the Player has enough coins to pay (coins reduced)
     *      false - the Player doesn't have enough coins to pay (coins not reduced)
     */
    bool pay(int amount);

    /*
     * returns the combined strength of attack (level + force)
     *
     * @return
     *      the strength of attack
     */
    int getAttackStrength() const;

    virtual Player* clone() const = 0;


protected:
    std::string m_name;
    int m_maxHp;
    int m_hp;
    int m_force;
    int m_level;
    int m_coins;
};


#endif //EX2_PLAYER_H
