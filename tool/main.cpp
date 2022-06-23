

#include "Mtmchkin.h"
#include "Exception.h"
#include <iostream>


/*
 * runs the game Mtmchkin
 */
int main(){
    try{
        Mtmchkin game("../deck.txt");
        while(!game.isGameOver()){
            game.playRound();
        }
        game.printLeaderBoard();
    }
    catch(const std::exception& e){
        std::cout << e.what();
        return 1;
    }
    return 0;
}
