//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Card_H
#define EX2_Card_H

#include <string>
#include "Players/Player.h"


class Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Card(std::string cardName);


    Card& operator=(const Card& other) = default;

    virtual ~Card() = default;

    Card(const Card&) = default;


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    virtual void applyEncounter(Player& player) const = 0;


//    /*
//     * Prints the card info:
//     *
//     * @return
//     *      void
//    */
//    virtual void printCardDetails() const;
//  I think it belonged to ex2 or my bad

    /*
     * Prints the card info:
     *
     * @return
     *      void
    */
//    void printEndOfCardDetails() const;
    


//    /*
//     * C'tor to the "default card" - Treasure card that gives 0 coins
//    */
//    Card(): m_effect(CardType::Treasure), m_stats() {}

    virtual std::ostream& print(std::ostream& out) const = 0;

    friend std::ostream &operator<<(std::ostream &out, const Card& card);

    /*
     * Here we are explicitly telling the compiler to use the default methods
    */


    virtual Card* clone() const = 0;

protected:
    std::string m_name;

};


#endif //EX2_Card_H
