
#ifndef EX2_Dragon_H
#define EX2_Dragon_H

#include <string>
#include "Card.h"



class Dragon : public Card {
public:
    /*
     * C'tor of Dragon class
     *
     * @return
     *      A new instance of Dragon.
    */
    Dragon();


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
    Dragon(const Dragon&) = default;
    ~Dragon() = default;
    Dragon& operator=(const Dragon& other) = default;


    /*
     * the type of the Card (Dragon)
     */
    static const std::string TYPE;


private:
    int m_force;
    int m_loot;
};


#endif //EX2_Dragon_H
