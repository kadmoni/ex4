
#ifndef EX4_FIGHTER_H
#define EX4_FIGHTER_H

#include "Player.h"

class Fighter: public Player{
public:
    /*
     * overloading << operator for printing according to instructions
     */
    friend std::ostream& operator<<(std::ostream& out,const Fighter& fighter);
};

#endif //EX4_FIGHTER_H
