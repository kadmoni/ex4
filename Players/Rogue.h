
#ifndef EX4_ROGUE_H
#define EX4_ROGUE_H

#include "Player.h"


class Rogue: public Player {
public:
    /*
     * constructor for subclass Rogue
     * 
     * @param name - the name of the Rogue, Passed to baseclass Player
     * 
     * @return
     *      a new instance of Rogue
     */
    Rogue(std::string name);

    /*
     * Virtual copy constructor for subclass Rogue
     * 
     * @return
     *      pointer of baseclass type (Player) to a new Rogue
     */
    Player *clone() const override;
    /*
    * adds to the member coins of Rogue
    *
    * @param amount - the amount of coins to be added according to Rogue stipulations
    * @return
    *      void
    */
    void addCoins(int amount) override;
    /*
     * overloading << operator for printing according to instructions
     */

    std::ostream & print(std::ostream &out) const override;

    /*
     * copy constructor, assignment operator and destructor defined as default
     */
    Rogue(const Rogue &) = default;
    Rogue &operator=(const Rogue &) = default;
    ~Rogue() override = default;

    static const std::string JOB;
};

#endif //EX4_ROGUE_H