//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Batfight_H
#define EX2_Batfight_H

#include <string>
#include "Player.h"
#include "utilities.h"

/*
 *  CardType:
 *  Each card has an type:
 *  BATTLE - Battle against a monster.
 *  BUFF - Increase your player's force by 'm_force' points of CardStats.
 *  HEAL - Increase your player's HP by 'm_heal' points  of CardStats (no more than maxHP points).
 *  TREASURE - Get 'm_profit' coins of CardStats.
*/

class Barfight : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Barfight(std::string m_name = "Barfight", int m_damage = 10);
    
    
    Card* clone() const override;


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;


    /*
     * Prints the card info:
     *
     * @return
     *      void
    */
 //   void printInfo() const;

    std::ostream & print(std::ostream &out) const override;

    /*
     * Here we are explicitly telling the compiler to use the default methods
    */
    Barfight(const Barfight&) = default;
    ~Barfight() override = default;
    Barfight& operator=(const Barfight& other) = default;


private:
    std::string m_name;
    int m_damage;
};


#endif //EX2_Batfight_H
