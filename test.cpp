
#include <functional>
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Players/Player.h"
#include "Cards/Card.h"
#include "Mtmchkin.h"
#include "Cards/Vampire.h"
#include "Cards/Barfight.h"
#include "Cards/Dragon.h"
#include "Cards/Fairy.h"
#include "Cards/Goblin.h"
#include "Cards/Merchant.h"
#include "Cards/Pitfall.h"
#include "Cards/Treasure.h"
#include <algorithm>
#include <sstream>
#include <random>
#include <cstdio>
#include <fstream>

using std::unique_ptr;
using std::cout;

/* ---------------------------------------------------------------------------------------------- */

// --------------------------------       General Helper Functions          ------------------------------


void createTextFile(const std::string filename, const std::string input){
    std::ofstream file(filename);
    if(file){
        file << input;
    }
}

void deleteTextFile(const std::string filename){
    std::remove(filename.c_str());
}

bool compareFiles(std::string filename1, std::string filename2)
{
    std::string line1,line2;
    std::fstream file1(filename1),file2(filename2);
    const char *cerr;
    if( !file2){
         std::cerr <<"Error opening file 2"<<std::endl;
         return false;
    }
	if(!file1 ){
         std::cerr<<"Error opening file 1"<<std::endl;
         return false;
    }
    while(!file1.eof()){ //read file until you reach the end
        getline(file1,line1);
        getline(file2,line2);
        if(!(line1==line2))
        {
            return false;
        }
    }
    if(!file2.eof()){
        return false;
    }
    return true;
}

bool GeneralGameSimulationTest(const std::string tempDeckFilename, std::string input, std::string deck, std::string expectedOutputFileName){
//   init cin from file
    createTextFile(tempDeckFilename+".txt",deck);
    std::istringstream in(input);
    std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    std::cin.rdbuf(in.rdbuf());

    std::ofstream outfile(tempDeckFilename+"out.txt");
    std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(outfile.rdbuf());
    Mtmchkin game(tempDeckFilename+".txt");
    while(!game.isGameOver() && game.getNumberOfRounds() < 100){
        game.playRound();
        game.printLeaderBoard();
    }

    bool res = compareFiles(tempDeckFilename+"out.txt", expectedOutputFileName);
	outfile.close();
    std::cin.rdbuf(cinbuf);
    std::cout.rdbuf(coutbuf);
    deleteTextFile(tempDeckFilename+".txt");
//    deleteTextFile(tempDeckFilename+"out.txt");
    return res;
}

// bool GeneralGameSimulationTest(const string tempFilename, string input, string expectedOutputFile){
// //   init cin from file
//     istringstream in(input);
//     std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
//     std::cin.rdbuf(in.rdbuf());

//     ofstream outfile(tempFilename+"out.txt");
//     std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
//     std::cout.rdbuf(outfile.rdbuf());
//     Mtmchkin game(tempFilename+".txt");
//     while(!game.isGameOver() && game.getNumberOfRounds() < 100){
//         game.playRound();
//         game.printLeaderBoard();
//     }
//     bool res = compareFiles(tempFilename+"out.txt", expectedOutputFile);
//     std::cin.rdbuf(cinbuf);
//     std::cout.rdbuf(coutbuf);
//     return res;
// }

void run_test(std::function<bool()> test, std::string test_name)
{
    if(!test()){
        std::cout<< test_name <<" FAILED."<<std::endl;
        std::cout << std::endl;
        return;
    }
    std::cout<<test_name<<" SUCCEEDED."<<std::endl;
    std::cout << std::endl;

}


/* ---------------------------------------------------------------------------------------------- */

// --------------------------------       Tests for Card class          ------------------------------



bool cardsPrintsTest(){
    
    Barfight junta;
    Dragon mushu;
    Fairy alizaMalek;
    Goblin goblin;
    Merchant pizzaHut;
    Pitfall moedB;
    Treasure factor;
    Vampire dracula;
    cout << junta << std::endl << mushu << std::endl << alizaMalek   
                    << std::endl << goblin  << std::endl << pizzaHut
                    << std::endl << moedB  << std::endl << factor
                    << std::endl << dracula;
    return true;
}


bool playersPrintsTest(){

    Rogue player1("Itay");
    Fighter player2("Efrat");
    Wizard player3("Jimmy");
    cout << player1 << std::endl << player2 << std::endl << player3   
                    << std::endl;
    return true;
}

bool testCard()
{
    std::vector<unique_ptr<Card>> cards;
    cards.push_back(unique_ptr<Card>(new Goblin()));
    cards.push_back(unique_ptr<Card>(new Vampire()));
    cards.push_back(unique_ptr<Card>(new Dragon()));
    cards.push_back(unique_ptr<Card>(new Treasure()));
    cards.push_back(unique_ptr<Card>(new Merchant()));
    cards.push_back(unique_ptr<Card>(new Fairy()));
    cards.push_back(unique_ptr<Card>(new Barfight()));
    cards.push_back(unique_ptr<Card>(new Pitfall()));
    for(unique_ptr<Card>& card : cards){
        cout << *card;
    }
	cards.erase(cards.begin(),cards.end());
    return true;
}


/* ---------------------------------------------------------------------------------------------- */

// --------------------------------       Tests for Mtmchkin class          ------------------------------


bool gameRunTest(){
//   init cin from file
    std::ifstream in("in.txt");
    if(!in.is_open()){
        throw exception();
    }
    std::cin.rdbuf(in.rdbuf());

    Mtmchkin game("gametest.txt");
    while(!game.isGameOver()){
        game.playRound();
    }

    return true;
}

bool dragonDenTest()
{
    const std::string tmp_file("dragonDen_test");
    std::string input("2\nJimmy Wizard\nPikachu Fighter");
    std::string deck("Dragon\nDragon\nDragon\nDragon\nDragon");
    std::string expectedOutputFilename("tests/dragonDen_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool vampireLairTest()
{
    const std::string tmp_file("vampireLiar_test");
    std::string input("2\nItay Fighter\nPikachu Rogue");
    std::string deck("Vampire\nVampire\nVampire\nVampire\nVampire");
    std::string expectedOutputFilename("tests/vampireLair_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool goblinCaveTest()
{
    const std::string tmp_file("goblinCave_test");
    std::string input("2\nItay Wizard\nPikachu Rogue");
    std::string deck("Goblin\nGoblin\nGoblin\nGoblin\nGoblin");
    std::string expectedOutputFilename("tests/goblinCave_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool nonMostersTest()
{
    const std::string tmp_file("noMonster_test");
    std::string input("2\nItay Wizard\nPikachu Rogue");
    std::string deck("Fairy\nBarfight\nPitfall\nTreasure\nFairy");
    std::string expectedOutputFilename("tests/noMonster_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool roundLimitTest()
{
    const std::string tmp_file("roundLimit_test");
    std::string input("2\nmatamDalf Wizard\nrocky Fighter");
    std::string deck("Fairy\nFairy\nFairy\nFairy\nFairy");
    std::string expectedOutputFilename("tests/roundLimit_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool allTenTest()
{
    const std::string tmp_file("allTen_test");
    std::string input("2\nmatamDalf Wizard\nrocky Fighter");
    std::string deck("Goblin\nGoblin\nGoblin\nGoblin\nGoblin");
    std::string expectedOutputFilename("tests/allTen_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool badPlayerInputTest()
{
    const std::string tmp_file("badPlayerInput_test");
    std::string input("2\nmatamDalf Wizardd \nmatamDalf rogoe\n matamDalf Wizard\nrocky Fighter");
    std::string deck("Goblin\nVampire\nGoblin\nGoblin\nDragon");
    std::string expectedOutputFilename("tests/badPlayerInput_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

bool merchantInputTest()
{
    const std::string tmp_file("merchantInput_test");
    std::string input("2\nmatamDalf Wizardd \nmatamDalf rogoe\n matamDalf Wizard\nrocky Fighter\n"
                 "1\n"
                 "1\n"
                 "0\n"
                 "2\n"
                 "0\n");
    std::string deck("Goblin\nGoblin\nMerchant\nMerchant\nDragon");
    std::string expectedOutputFilename("tests/merchantInput_test_expected.txt");
    return GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
}

/* ---------------------------------------------------------------------------------------------- */

// --------------------------------       Tests for Exceptions          ------------------------------

bool badSizeTest()
{
    const std::string tmp_file("badSize_test");
    std::string input("4\nBarbieGirl Wizard\nInABarbieWorld Rogue\n MadeOfPlastic Rogue\nITSFANTASTIC Wizard");
    std::string deck("Fairy");
    std::string expectedOutputFilename("notneeded.txt");
	bool flag= false;
    try{
        Mtmchkin("inputs/empty.txt");
    }
    catch(const DeckFileInvalidSize& e){
        flag = true;
    }
    return flag;
}
bool noFileTest()
{
    const std::string tmp_file("noFile_test");
    std::string input("2\nItay Wizard\nPikachu Rogue");
    std::string expectedOutputFilename("notneeded.txt");
    std::string deck("This_is_not_the_file_your_looking_for");
    bool flag = false;
    try{
        Mtmchkin("noFile.txt");
    }
    catch(const DeckFileNotFound& e){
        flag=true;
    }
    return flag;
}
bool badFormatTest()
{
    const std::string tmp_file("badFormat_test");
    std::string input("2\nItay Wizard\nPikachu Rogue");
    std::string deck("SomeBody Once told me the world is gonna roll me\nVampire\n");
    std::string expectedOutputFilename("notneeded.txt");
    bool flag = false;
    try {
        Mtmchkin("inputs/badFormat_test.txt");
//        GeneralGameSimulationTest(tmp_file, input, deck, expectedOutputFilename);
    }
    catch(const DeckFileFormatError& e){
        if(strcmp(e.what(),"Deck File Error: File format error in line 2")==0) {
            flag=true;
        }
    }
    return flag;
}
bool badFormatStartTest()
{
    const std::string tmp_file("badFormat_test");
    std::string input("2\nItay Wizard\nPikachu Rogue");
    std::string deck("I aint the sharpest tool in the shed\nVampire");
    std::string expectedOutputFilename("notneeded.txt");
    bool flag = false;
    try {
        Mtmchkin("badFormat_test_start_of_file.txt");
    }
    catch(const DeckFileFormatError& e){
        if(strcmp(e.what(),"Deck File Error: File format error in line 1")==0)
        {
            flag = true;
        }
    }
    return flag;
}

/* ---------------------------------------------------------------------------------------------- */

// --------------------------------       Main function          ------------------------------


int main(){
	run_test(cardsPrintsTest,"cardsPrintsTest");
	run_test(playersPrintsTest,"playersPrintsTest");
	run_test(testCard,"Deck creation test");
	run_test(dragonDenTest,"Dragon Den simulation test");
	run_test(goblinCaveTest,"Goblin Cave simulation test");
	run_test(vampireLairTest,"Vampire Lair simulation test");
	run_test(nonMostersTest,"Non monsters cards simulation test");
	run_test(badFormatStartTest,"Bad format at start of file exception test");
	run_test(badFormatTest,"Bad format exception test");
	run_test(noFileTest,"File Doesnt exist exception test");
	run_test(badSizeTest,"Bad size exception test");
    run_test(roundLimitTest,"Round upper limit test");
    run_test(allTenTest,"All reach lvl 10 test");
    run_test(badPlayerInputTest,"Bad player input test");
    run_test(merchantInputTest,"Merchant input test");





   //Mtmchkin game("dragonDen_test.txt");
   //    while(!game.isGameOver())
   //    {
   //        game.playRound();
   //        game.printLeaderBoard();
   //    }



    return 0;
}
