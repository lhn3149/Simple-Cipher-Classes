//
// Created by nguye on 4/17/2021.
//

#include <memory>
#include <iostream>
#include <string>
#include "XORCipher.h"
using namespace std;

const std::string XORCipher:: CIPHER_NAME = "XOR";

XORCipher::XORCipher (char key)
        :key(key), Cipher("XOR")
{
}

/**
* Concrete implementation of encode, perform Caesar encode of message
* @param decodedMsg - string message to encode
* @return true if encode is successful else false
*/

bool XORCipher:: encode (std::string decodedMsg){

    for (int j=0; j < decodedMsg.length(); ++j ){
        if (checkCharacter(decodedMsg[j])){
            encoded = encoded + (char) (decodedMsg[j] ^ key) ;
        }else{
            return false;
        }
    };
    return true;
}

/**
* Concrete implementation of decode, perform Caesar decode of message
* @param encodedMsg - string message to decode
* @return true if decode is successful else false
*/

bool XORCipher:: decode (std::string encodedMsg){
    for (int j=0; j < encodedMsg.length(); ++j ){
        if (checkCharacter(encodedMsg[j])){
            decoded = decoded + (char)(encodedMsg[j] ^ key) ;
        }else{
            return false;
        }
    };
    return true;
}

/**
  * Checks is character is valid for Caesar cipher
  * For this implementation only valid are capital A-Z
  * Hint: ASCII representation of A-Z are decimal numbers 65-90
  * @param c - character to check
  * @return - true is character is A-Z otherwise false
  */
bool XORCipher:: checkCharacter (char c){
    return true;
}