
#ifndef EX2_Fairy_H
#define EX2_Fairy_H

#include <string>
#include "Card.h"


/*
 * heals Wizards when encountered
 */
class Fairy : public Card {
public:
    /*
     * C'tor of Fairy class
     *
     * @return
     *      A new instance of Fairy.
    */
    Fairy();


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
    Fairy(const Fairy&) = default;
    ~Fairy() override = default;
    Fairy& operator=(const Fairy& other) = default;
    
    /*
     * the type of the Card (Fairy)
     */
    static const std::string TYPE;


private:
    int m_heal;

    static const int fairyHeal = 10;

};


#endif //EX2_Fairy_H
