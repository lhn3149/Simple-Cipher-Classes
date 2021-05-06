//
// Created by nguye on 4/17/2021.
//

#ifndef UNTITLED12HOMEWORK_8_XORCIPHER_H
#define UNTITLED12HOMEWORK_8_XORCIPHER_H

#include "Cipher.h"
//static const std::string CIPHER_NAME = "XOR";
// Derived Concrete Class of Abstract Base Class Cipher
class XORCipher : public Cipher
{
public:

    /**
     * Constructor
     * @param key - key to use for cipher
     */

    XORCipher (char key);
    /**
     * Concrete implementation of encode, perform XOR encode of message
     * @param decodedMsg - string message to encode
     * @return true if encode is successful else false
     */

    bool encode (std::string decodedMsg);
    /**
     * Concrete implementation of decode, perform XOR decode of message
     * @param encodedMsg - string message to decode
     * @return true if decode is successful else false
     */

    bool decode (std::string encodedMsg);
    /**
     * Check if character is valid for XOR cipher
     * @param c - character to check
     * @return true always for XOR cipher
     */


    bool checkCharacter (char c) ;
    /**
     *
     * @return key used in the cipher
     */
    inline char getKeyValue() const { return key; };


    inline std::string getEncoded() const { return encoded; }

    inline std::string getDecoded() const { return decoded; }

    inline std::string getCipherName() const { return cipherName; }

    /**
     * Static const string to the XORCipher name
     */
    static const std::string CIPHER_NAME ;

protected:

    /**
     * Key used in XOR cipher
     */
    char key;

};


#endif //UNTITLED12HOMEWORK_8_XORCIPHER_H
