
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Players/Player.h"
#include "Mtmchkin.h"
#include <string>





class DeckFileNotFound : public std::runtime_error {
public:

//    /** Constructor (C strings).
//     *  @param message C-style string error message.
//     *                 The string contents are copied upon construction.
//     *                 Hence, responsibility for deleting the char* lies
//     *                 with the caller.
//     */
    DeckFileNotFound() : std::runtime_error("Deck File Error: File not found") {};
};






class DeckFileInvalidSize : public std::runtime_error {
public:

//    /** Constructor (C strings).
//     *  @param message C-style string error message.
//     *                 The string contents are copied upon construction.
//     *                 Hence, responsibility for deleting the char* lies
//     *                 with the caller.
//     */
    DeckFileInvalidSize() : std::runtime_error("Deck File Error: Deck size is invalid") {};

};





class DeckFileFormatError : public std::runtime_error {
public:


    explicit DeckFileFormatError(int line) : std::runtime_error("Deck File Error: File format error in line " + std::to_string(line)){};

};


#endif //EX4_EXCEPTION_H

