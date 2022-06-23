
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Players/Player.h"
#include "Mtmchkin.h"
#include <string>





class DeckFileNotFound : public std::runtime_error {
public:

/*
 * thrown if a file can't be opened using the provided path
 */
    DeckFileNotFound() : std::runtime_error("Deck File Error: File not found") {};

    /*
     * copy constructor, assignment operator and destructor set to default
     */
    DeckFileNotFound(const DeckFileNotFound&) = default;
    DeckFileNotFound& operator=(const DeckFileNotFound&) = default;
    ~DeckFileNotFound() = default;
};






class DeckFileInvalidSize : public std::runtime_error {
public:

/*
 * thrown if the deck has less than five cards
 */
    DeckFileInvalidSize() : std::runtime_error("Deck File Error: Deck size is invalid") {};

    /*
     * copy constructor, assignment operator and destructor set to default
     */
    DeckFileInvalidSize(const DeckFileInvalidSize&) = default;
    DeckFileInvalidSize& operator=(const DeckFileInvalidSize&) = default;
    ~DeckFileInvalidSize() = default;
};





class DeckFileFormatError : public std::runtime_error {
public:

/*
 * thrown if one of the lines in the file foes not correspond to a card in the game
 */
    explicit DeckFileFormatError(int line) : std::runtime_error("Deck File Error: File format error in line " + std::to_string(line)){};

    /*
     * copy constructor, assignment operator and destructor set to default
     */
    DeckFileFormatError(const DeckFileFormatError&) = default;
    DeckFileFormatError& operator=(const DeckFileFormatError&) = default;
    ~DeckFileFormatError() = default;
};


#endif //EX4_EXCEPTION_H

