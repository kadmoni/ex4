//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Goblin_H
#define EX2_Goblin_H

#include <string>
#include "Card.h"

class Goblin : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Goblin();


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
    Goblin(const Goblin&) = default;
    ~Goblin() override = default;
    Goblin& operator=(const Goblin& other) = default;

    static const std::string TYPE;


private:
    int m_force;
    int m_loot;
    int m_damage;

};


#endif //EX2_Goblin_H
