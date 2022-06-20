
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Players/Player.h"
#include "Mtmchkin.h"
#include <string>





class DeckFileNotFound : public std::runtime_error {
public:

/*
 * thrown if a file can't be file using the provided path
 */
    DeckFileNotFound() : std::runtime_error("Deck File Error: File not found") {};
};






class DeckFileInvalidSize : public std::runtime_error {
public:

/*
 * thrown if the deck has less than five cards
 */
    DeckFileInvalidSize() : std::runtime_error("Deck File Error: Deck size is invalid") {};

};





class DeckFileFormatError : public std::runtime_error {
public:

/*
 * thrown if one of the lines in the file foes not correspond to a card in the game
 */
    explicit DeckFileFormatError(int line) : std::runtime_error("Deck File Error: File format error in line " + std::to_string(line)){};

};


#endif //EX4_EXCEPTION_H

