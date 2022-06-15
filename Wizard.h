
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
     * overloading << operator for printing according to instructions
     */
    friend std::ostream& operator<<(std::ostream& out,const Wizard& wizard);
    /*
     * copy constructor, assignment operator and destructor defined as default
     */
    Wizard(const Wizard&) = default;
    Wizard& operator=(const Wizard&) = default;
    ~Wizard() override = default;
};

#endif //EX4_WIZARD_H
