//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Players/Player.h"
#include <iostream>
using std::cout;
using std::endl;


Card::Card() {}; //add print function for future code usability


std::ostream& operator<<(std::ostream &out, const Card& card)
{
    card.print(out);
    return out;
}
