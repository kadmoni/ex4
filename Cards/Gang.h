
#ifndef EX2_Gang_H
#define EX2_Gang_H

#include <string>
#include <queue>
#include <memory>
#include "Card.h"



class Gang : public Card {
public:
    /*
     * C'tor of Gang class
     *
     * @param deck - file containing the cards that should be added to the deck
     * @param deckLine - the line from which to start reading fromt the file
     * @return
     *      A new instance of Gang
    */
    Gang(std::ifstream& deck, int& deckLine);

    /*
     * copy C'tor of Card class
     *
     * @param Gang - a different instance of Gang
     * @return
     *      A new instance of Gang.
    */
    Gang(const Gang&);

    /*
    * copy C'tor of Card class
    *
    * @param Gang - a different instance of Gang
    * @return
    *      reference to the current Gang after the assignment
    */
    Gang& operator=(const Gang& other);


    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;


    /*
     * applies the correct amount of damage and status effects after loss to a Gang
     *
     * @param player - the player to which damage will be applied
     * @param currentMonster - the place of the monster in the Gang (so the following will be applied to the Player)
     * @return
     *      void
     */
    void applyDamage(Player& player, int currentMonster) const;

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
    ~Gang() override = default;

    static const std::string TYPE;
    static const std::string END;



private:
    std::vector<std::unique_ptr<Card>> m_theGang;
    static const int DEFEATED = -12;

};


#endif //EX2_Gang_H
