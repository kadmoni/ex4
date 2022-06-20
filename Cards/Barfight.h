
#ifndef EX2_Barfight_H
#define EX2_Barfight_H

#include <string>
#include "Card.h"


/*
 * damages every type of Player except Fighter
 */
class Barfight : public Card {
public:
    /*
     * C'tor of Barfight class
     *
     * @return
     *      A new instance of Barfight.
    */
    Barfight();


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player to which the result of the encounter will be dealt.
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
    Barfight(const Barfight&) = default;
    ~Barfight() override = default;
    Barfight& operator=(const Barfight& other) = default;

    /*
     * the type of the Card (Barfight)
     */
    static const std::string TYPE;


private:
    int m_damage;
};


#endif //EX2_Barfight_H
