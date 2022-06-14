
#ifndef EX4_ROGUE_H
#define EX4_ROGUE_H

#include "Player.h"


class Rogue: public Player{
public:
    /*
     * overloading << operator for printing according to instructions
     */
    friend std::ostream& operator<<(std::ostream& out,const Rogue& rogue);
};

#endif //EX4_ROGUE_H
