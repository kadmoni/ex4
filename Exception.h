
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Player.h"
#include "Mtmchkin.h"
#include <string>
using std::cout;

class Exception : public std::exception {
public:

    /** Constructor (C strings).
     *  @param message C-style string error message.
     *                 The string contents are copied upon construction.
     *                 Hence, responsibility for deleting the char* lies
     *                 with the caller.
     */
    explicit Exception(const char* message) : msg_(message) {}


    /** Constructor (C++ STL strings).
     *  @param message The error message.
     */
    explicit Exception(const std::string& message) : msg_(message) {}


    bool operator==(const Exception& other) const;


    /** Destructor.
    * Virtual to allow for subclassing.
    */
    virtual ~Exception() noexcept {}
    class DeckFileNotFound{};
    class DeckFileFormatError(int line){};
    class DeckFileInvalidSize{};


    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *          is in posession of the Exception object. Callers must
     *          not attempt to free the memory.
     */
     const char* what() const noexcept override {
        return msg_.c_str();
        if (*this == Exception::DeckFileInvalidSize()){
            cout << "Deck File Error: Deck size is invalid" << std::endl;
        }
        else if (this == DeckFileFormatError()){
            cout << "Deck File Error: File format error in line" << lineNumber << std::endl;
        }
        else if (this == DeckFileNotFound()){
            cout << "Deck File Error: File not found" << std::endl;
        }
        else {
            cout << this->what() << std::endl;
        }
    }

protected:
    /** Error message.
     */
    std::string msg_;
};







#endif //EX4_EXCEPTION_H


//    const char* what() const noexcept {
//
//    }