//
// Created by Daniel_Meents on 07/04/2022.
//
#ifndef EX2_Merchant_H
#define EX2_Merchant_H

#include <string>
#include "Player.h"
#include "utilities.h"


class Merchant : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Merchant();

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
    Merchant(const Merchant&) = default;
    ~Merchant() override = default;
    Merchant& operator=(const Merchant& other) = default;

    static const std::string TYPE;


private:
    int m_heal;
    int m_buff;
    int m_healCost;
    int m_buffCost;
};


#endif //EX2_Merchant_H
