
#ifndef EX2_Vampire_H
#define EX2_Vampire_H

#include <string>
#include "Card.h"



class Vampire : public Card {
public:
    /*
     * C'tor of Vampire class
     *
     * @return
     *      A new instance of Vampire.
    */
    explicit Vampire();


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;


    /*
    * Handling the player's gangEncounter with the card:
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
    Vampire(const Vampire&) = default;
    ~Vampire() override = default;
    Vampire& operator=(const Vampire& other) = default;

    /*
     * the type of the Card (Goblin)
     */
    static const std::string TYPE;


private:
    int m_force;
    int m_loot;
    int m_damage;
    int m_debuff;

    static const int vampForce=10;
    static const int vampLoot=2;
    static const int vampDamage=10;
    static const int vampDebuff=1;

};


#endif //EX2_Vampire_H
