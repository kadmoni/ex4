//
// Created by itke on 4/20/2022.
//

#include "Mtmchkin.h"
#include "Exception.h"



int main(){
    //const int MAX_NUMBER_OF_ROUNDS = 100;
    try{
        Mtmchkin game("deck.txt");
    }
    catch(const std::exception& e){
        std::cout << e.what();
    }
//    catch(const DeckFileNotFound& e){
//        cout << e.what();
//    }
//    catch(const DeckFileNotFound& e){
//        cout << e.what();
//    }

//    while(!game.isGameOver() && game.getNumberOfRounds() < MAX_NUMBER_OF_ROUNDS){
//        game.playRound();
//    }
//    game.printLeaderBoard();
//
//    try{
//        Mtmchkin game("deck.txt");
//    }
//    catch(const std::exception& e){
//        std::cout << e.what();
//    }

    while(!game.isGameOver()){
        game.playRound();
    }
    game.printLeaderBoard();


    return 0;
}
