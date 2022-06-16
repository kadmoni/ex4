
#ifndef EX4_WIZARD_H
#define EX4_WIZARD_H

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
            cout << "Deck File Error: Deck size is invalid" << endl;
        }
        else if (this == DeckFileFormatError()){
            cout << "Deck File Error: File format error in line" << lineNumber << endl;
        }
        else if (this == DeckFileNotFound()){
            cout << "Deck File Error: File not found" << endl;
        }
    }
    
};

#endif //EX4_WIZARD_H
