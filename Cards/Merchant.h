
#ifndef EX2_Merchant_H
#define EX2_Merchant_H

#include <string>
#include "Card.h"



class Merchant : public Card {
public:
    /*
     * C'tor of Merchant class
     *
     * @return
     *      A new instance of Merchant.
    */
    Merchant();

    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;

    /*
     * Handling the player's merchant choice
     *
     * @param player - The player and his numerical choice
     * @return
     *      void
    */
    void merchantChoice(Player& player, int choice) const;


    /*
     * Prints the card info:
     *
     * @return
     *      void
    */
    std::ostream & print(std::ostream &out) const override;





    /*
     * Here we are explicitly telling the compiler to use the default methods
    */
    Merchant(const Merchant&) = default;
    ~Merchant() override = default;
    Merchant& operator=(const Merchant& other) = default;


    /*
    * the type of the Card (Goblin)
    */
    static const std::string TYPE;


private:
    int m_heal;
    int m_buff;
    int m_healCost;
    int m_buffCost;

    static int const healMerch = 1;
    static int const buffMerch = 1;
    static int const healCost = 5;
    static int const buffCost = 10;
    static int const choiceInit = 3;
    static int const noChoice = 0;
    static int const choiceHeal = 1;
    static int const choiceBuff = 2;
};


#endif //EX2_Merchant_H
