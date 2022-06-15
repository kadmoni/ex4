
#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H

#include "Player.h"

class Fighter: public Player{
public:
    /*
     * constructor for subclass Fighter
     *
     * @param name - the name of the Fighter, Passed to baseclass Player
     *
     * @return
     *      a new instance of Fighter
     */
    Fighter(std::string name);
    /*
     * Virtual copy constructor for subclass Fighter
     *
     * @return
     *      pointer of baseclass type (Player) to a new Fighter
     */
    Player* clone () const override;
    /*
    * adds to the hp of the Player
    *
    * @param amount - the amount of hp to be added to the Fighter according to Fighter stipulations
    * @return
    *      void
    */
    int getAttackStrength() const override;

    /*
     * overloading << operator for printing according to instructions
     */
    friend std::ostream& operator<<(std::ostream& out,const Fighter& fighter);
    /*
     * copy constructor, assignment operator and destructor defined as default
     */
    Fighter(const Fighter&) = default;
    Fighter& operator=(const Fighter&) = default;
    ~Fighter() override = default;

    static const std::string JOB;

};

#endif //EX4_FIGHTER_H
