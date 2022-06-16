//
// Created by Adi Tsach on 06/04/2022.
//


#include "Card.h"
#include "Player.h"
#include "utilities.h"
#include <iostream>
using std::cout;
using std::endl;
void negativeCheck(int& a);


Card::Card(){}


std::ostream& operator<<(std::ostream &out, const Card& card)
{
    card.print(out);
}

void negativeCheck(int& a) {
    if (a < 0)
    {
        a = 0;
    }
}
