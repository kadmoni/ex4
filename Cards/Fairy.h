//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Fairy_H
#define EX2_Fairy_H

#include <string>
#include "Players/Player.h"
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
    Fairy(std::string name);
    
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
    Fairy(const Fairy&) = default;
    ~Fairy() override = default;
    Fairy& operator=(const Fairy& other) = default;

    static const std::string TYPE;


private:
    int m_heal;
};


#endif //EX2_Fairy_H
