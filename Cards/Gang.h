
#ifndef EX2_Gang_H
#define EX2_Gang_H

#include <string>
#include <queue>
#include <memory>
#include "Card.h"



class Gang : public Card {
public:
    /*
     * C'tor of Card class
     *
     * @param type - The type of the card.
     * @param stats - The numeral stats of the card.
     * @return
     *      A new instance of Card.
    */
    Gang(std::ifstream& deck, int& deckLine);



    /*
     * Handling the player's applyEncounter with the card:
     *
     * @param player - The player.
     * @return
     *      void
    */
    void applyEncounter(Player& player) const override;






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
    Gang(const Gang&) = default;
    ~Gang() override = default;
    Gang& operator=(const Gang& other) = default;

    static const std::string TYPE;
    static const std::string END;



private:
    std::vector<std::unique_ptr<Card>> m_theGang;
    static const int DEFEATED = 11;

};


#endif //EX2_Gang_H
