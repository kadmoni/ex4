//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Player.h"
//#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;


Card::Card()= default;


std::ostream& operator<<(std::ostream &out, const Card& card)
{
    card.print(out);
}
