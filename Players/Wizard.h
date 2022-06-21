
#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H

#include "Player.h"
#include <string>


class Wizard: public Player{
public:
    /*
     * constructor for subclass Wizard
     *
     * @param name - the name of the Wizard, Passed to baseclass Player
     *
     * @return
     *      a new instance of Wizard
     */
    Wizard(std::string name);
    /*
     * Virtual copy constructor for subclass Wizard
     *
     * @return
     *      pointer of baseclass type (Player) to a new Wizard
     */
    Player* clone () const override;
    /*
    * adds to the hp of the Player
    *
    * @param amount - the amount of hp to be added to the Wizard according to Wizard stipulations
    * @return
    *      void
    */
    void heal(int amount) override;

    std::ostream & print(std::ostream &out) const override;

    /*
     * copy constructor, assignment operator and destructor defined as default
     */
    Wizard(const Wizard&) = default;
    Wizard& operator=(const Wizard&) = default;
    ~Wizard() override = default;

    /*
     * defined as Wizard (used in reading from file)
     */
    static const std::string JOB;
};

#endif //EX4_WIZARD_H
