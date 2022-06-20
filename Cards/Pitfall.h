
#ifndef EX2_Pitfall_H
#define EX2_Pitfall_H

#include <string>
#include "Card.h"


/*
 * damages every type of Player except Rogue
 */
class Pitfall : public Card {
public:
    /*
     * C'tor of Pitfall class
     *
     * @return
     *      A new instance of Pitfall.
    */
    Pitfall();


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
    Pitfall(const Pitfall&) = default;
    ~Pitfall() override = default;
    Pitfall& operator=(const Pitfall& other) = default;
    
    /*
     * the type of the Card (Pitfall)
     */
    static const std::string TYPE;

private:
    int m_damage;
};


#endif //EX2_Pitfall_H
