//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Vampire_H
#define EX2_Vampire_H

#include <string>
#include "Card.h"

//#include "Players/Player.h"
//#include "utilities.h"


class Vampire : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    explicit Vampire();

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
    Vampire(const Vampire&) = default;
    ~Vampire() override = default;
    Vampire& operator=(const Vampire& other) = default;

    static const std::string TYPE;


private:
    int m_force;
    int m_loot;
    int m_damage;
    int m_debuff;

};


#endif //EX2_Vampire_H
