
#ifndef EX2_Goblin_H
#define EX2_Goblin_H

#include <string>
#include "Card.h"

class Goblin : public Card {
public:
    /*
     * C'tor of Goblin class
     *
     * @return
     *      A new instance of Goblin.
    */
    Goblin();


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;


    /*
   * Handling the player's applyEncounter with the card:
   *
   * @param player - The player.
   * @return
   *      void
  */
    void gangEncounter(Player& player) const;


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

    /*
     * the type of the Card (Goblin)
     */
    static const std::string TYPE;


private:
    int m_force;
    int m_loot;
    int m_damage;

    static const int gobForce = 6;
    static const int gobLoot = 2;
    static const int gobDamage = 10;

};


#endif //EX2_Goblin_H
