//
// Created by nguye on 4/17/2021.
//

#ifndef UNTITLED12HOMEWORK_8_CIPHER_H
#define UNTITLED12HOMEWORK_8_CIPHER_H
#include <string>

// Abstract Base Class
class Cipher
{
public:
    /**
     * Abstract (pure virtual) function encode
     * @param decodedMsg -  message that requires encoding
     * @return true if encode was successful
    */
    virtual bool encode (std::string decodedMsg) = 0 ;

    /**
     * Abstract (pure virtual) function decode
     * @param encodedMsg - encoded message that requires decoded
     * @return true if decode was successful
     */

    virtual bool decode (std::string encodedMsg) = 0;

    /**
     *
     * Abstract Helper function (pure virtual) to check if a character is valid for a cipher
     * @param c - character to check
     * @return true if character may be used in the cipher
     */

    virtual inline std::string getEncoded() const { return encoded; }

    virtual inline std::string getDecoded() const { return decoded; }

    virtual inline std::string getCipherName() const { return cipherName; }

public:
    /**
     * Protected constrcutor, sets the Cipher name
     * May only be called by derived classes
     * @param name - name to set for cipherName
     */
    Cipher(std::string name);
    /**
     * Stores a decoded message
     */
    std::string decoded;

    /**
     * Stores an encoded message
     */
    std::string encoded;

    /**
     * Name of the cipher
     */
    std::string cipherName;
};
#endif //UNTITLED12HOMEWORK_8_CIPHER_H
