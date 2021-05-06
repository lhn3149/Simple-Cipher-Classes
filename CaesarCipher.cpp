//
// Created by nguye on 4/17/2021.
//

#include "CaesarCipher.h"
#include <memory>
#include <iostream>
#include <string>
using namespace std;

const std::string CaesarCipher:: CIPHER_NAME = "Caesar";

CaesarCipher::CaesarCipher (int shift)
        :shift(shift), Cipher("Caesar")
{
}

/**
* Concrete implementation of encode, perform Caesar encode of message
* @param decodedMsg - string message to encode
* @return true if encode is successful else false
*/

bool CaesarCipher:: encode (std::string decodedMsg) {

    for (int j=0; j < decodedMsg.length(); j++ ){
        if (checkCharacter(decodedMsg[j])){
            int ascii_code = (int)decodedMsg[j];
            if (ascii_code != 32){
                int alpha_code = ascii_code - 65;
                int shifted = alpha_code + shift ;
                while ((shifted>25)||(shifted <0)) {
                    if (shifted > 25) {
                        shifted = shifted - 25;
                    }
                    if (shifted < 0) {
                        shifted = shifted + 26;
                    }
                }
                    shifted = shifted + 65;
                    encoded = encoded + char(shifted);

            }else{
                    encoded = encoded+ decodedMsg[j];
            }
        } else {
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

bool CaesarCipher:: decode (std::string encodedMsg){
    string buffer;
    for (int j=0; j < encodedMsg.length(); j++ ){
        if (encodedMsg[j]){
            int ascii_code = (int)encodedMsg[j];
            if (ascii_code != 32){
                int alpha_code = ascii_code - 65;
                int shifted = alpha_code - shift ;
                while ((shifted>25)||(shifted <0)) {
                    if (shifted > 25) {
                        shifted = shifted - 25;
                    }
                    if (shifted < 0) {
                        shifted = shifted + 26;
                    }
                }
                shifted = shifted + 65;
                decoded = decoded + char(shifted);
            }else{
                    decoded = decoded + encodedMsg[j];
                }
            }else {
            return false;
            }
        cout << decoded[j]<<endl;

        }
    cout << decoded <<endl;
    return true;
}


/**
  * Checks is character is valid for Caesar cipher
  * For this implementation only valid are capital A-Z
  * Hint: ASCII representation of A-Z are decimal numbers 65-90
  * @param c - character to check
  * @return - true is character is A-Z otherwise false
  */
bool CaesarCipher:: checkCharacter (char c){
    int i;
    i = (int)c;
    if (((i<=90) && (i>=65))||(i==32)){
        return true;
    } else{
        return false;
    };
}