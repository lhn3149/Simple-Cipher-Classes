//
// Created by nguye on 4/17/2021.
//

#ifndef UNTITLED12HOMEWORK_8_CAESARCIPHER_H
#define UNTITLED12HOMEWORK_8_CAESARCIPHER_H
#include "Cipher.h"

// Derived Concrete Class of Abstract Base Class Cipher
//static const std::string CIPHER_NAME = "Caesar";
class CaesarCipher : public Cipher
{
public:
    /**
     * Constructor
     * @param shift - set amount to shift in cipher
     */
    CaesarCipher (int shift);

    /**
    * Concrete implementation of encode, perform Caesar encode of message
    * @param decodedMsg - string message to encode
    * @return true if encode is successful else false
    */

    bool encode (std::string decodedMsg);

    /**
    * Concrete implementation of decode, perform Caesar decode of message
    * @param encodedMsg - string message to decode
    * @return true if decode is successful else false
    */

    bool decode (std::string encodedMsg);

    /**
     * Checks is character is valid for Caesar cipher
     * For this implementation only valid are capital A-Z
     * Hint: ASCII representation of A-Z are decimal numbers 65-90
     * @param c - character to check
     * @return - true is character is A-Z otherwise false
     */
    bool checkCharacter (char c) ;

    /**
     *
     * @return shift value used with the cipher
     */
    inline int getShiftValue() const { return shift; };

    inline std::string getEncoded() const { return encoded; }

    inline std::string getDecoded() const { return decoded; }

    inline std::string getCipherName() const { return cipherName; }

    /**
     * Static const name for Caesar cipher
     */
    static const std::string CIPHER_NAME ;

protected:

    /**
     * Shift value for Caesar cipher
     */
    int shift;

};


#endif //UNTITLED12HOMEWORK_8_CAESARCIPHER_H
