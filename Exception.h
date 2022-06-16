
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Player.h"
#include "Mtmchkin.h"
#include <string>
using std::cout;

class Exception : public std::exception {
public:


    class DeckFileNotFound{};
    class DeckFileFormatError{};
    class DeckFileInvalidSize{};

    const char* what() const override {
        if (this == DeckFileInvalidSize()){
            cout << "Deck File Error: Deck size is invalid" << std::endl;
        }
        else if (this == DeckFileFormatError()){
            cout << "Deck File Error: File format error in line" << lineNumber << std::endl;
        }
        else if (this == DeckFileNotFound()){
            cout << "Deck File Error: File not found" << std::endl;
        }
        else {
            cout << std::exception.what() << std::endl;
        }
    }

};

#endif //EX4_EXCEPTION_H
