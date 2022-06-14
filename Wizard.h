
#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H

#include "Player.h"


class Wizard: public Player{
public:
    /*
     * overloading << operator for printing according to instructions
     */
    friend std::ostream& operator<<(std::ostream& out,const Wizard& wizard);
};

#endif //EX4_WIZARD_H
