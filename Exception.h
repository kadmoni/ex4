
#ifndef EX4_EXCEPTION_H
#define EX4_EXCEPTION_H

#include "Players/Player.h"
#include "Mtmchkin.h"
#include <string>
using std::cout;
using std::string;

class exception : public std::exception {
public:

    /** Constructor (C strings).
     *  @param message C-style string error message.
     *                 The string contents are copied upon construction.
     *                 Hence, responsibility for deleting the char* lies
     *                 with the caller.
     */
    exception(){}




    /** Destructor.
    * Virtual to allow for subclassing.
    */
    ~exception() noexcept {}

};



class DeckFileNotFound : public exception {
public:

//    /** Constructor (C strings).
//     *  @param message C-style string error message.
//     *                 The string contents are copied upon construction.
//     *                 Hence, responsibility for deleting the char* lies
//     *                 with the caller.
//     */
    DeckFileNotFound() = default;



    const char* what() const noexcept override {
        return "Deck File Error: File not found";
    }


    /** Destructor.
    * Virtual to allow for subclassing.
    */
   // ~DeckFileNotFound() override = default;


};





class DeckFileInvalidSize : public exception {
public:

//    /** Constructor (C strings).
//     *  @param message C-style string error message.
//     *                 The string contents are copied upon construction.
//     *                 Hence, responsibility for deleting the char* lies
//     *                 with the caller.
//     */
    DeckFileInvalidSize() = default;





    /** Destructor.
    * Virtual to allow for subclassing.
    */
 //   ~DeckFileInvalidSize() override = default;


    const char* what() const noexcept override {
        return "Deck File Error: Deck size is invalid";
    }

};



class DeckFileFormatError : public exception {
public:
    explicit DeckFileFormatError(int line) : m_lineError(line) {}

    ~DeckFileFormatError() override = default;



    // DeckFileFormatError(int line) : Exception(int line){};


    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *          is in posession of the Exception object. Callers must
     *          not attempt to free the memory.
     */
    const char* what() const noexcept override {
        cout << "Deck File Error: File format error in line" << m_lineError << std::endl;
    }


private:
    /** Line of error.
     */
    int m_lineError;
};


#endif //EX4_EXCEPTION_H

