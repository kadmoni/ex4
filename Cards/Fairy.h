//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Card_H
#define EX2_Card_H

#include <string>
#include "Player.h"
#include "utilities.h"


class Fairy : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Fairy(std::string m_name = "Fairy", int m_heal = 10);
    
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
    std::ostream & print(std::ostream &out) const override;



    /*
     * Here we are explicitly telling the compiler to use the default methods
    */
    Fairy(const Card&) = default;
    ~Fairy() = default;
    Fairy& operator=(const Card& other) = default;


private:
    int m_heal;
};


#endif //EX2_Card_H
