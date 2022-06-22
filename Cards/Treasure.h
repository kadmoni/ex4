
#ifndef EX2_Treasure_H
#define EX2_Treasure_H

#include <string>
#include "Card.h"

/*
 * adds coins to a Player
 */
class Treasure : public Card {
public:
    /*
      * C'tor of Treasure class
      *
      * @return
      *      A new instance of Treasure.
     */
    Treasure();

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
    Treasure(const Treasure&) = default;
    ~Treasure() override = default;
    Treasure& operator=(const Treasure& other) = default;

    /*
     * the type of the Card (Treasure)
     */
    static const std::string TYPE;
    static const int defLootAmount = 10;


private:
    int m_loot;

};


#endif //EX2_Treasure_H
