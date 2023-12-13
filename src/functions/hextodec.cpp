#include "../../header/main.h"

std::uint64_t HexToDec(std::string hexString) {
    std::uint64_t decimalValue = 0;

    // removes "0x" prefix if there is.
    if(hexString.substr(0, 2) == "0x")
        hexString = hexString.substr(2);

    // iterates through each character in hexString.
    for(char hexDigit : hexString) {
        hexDigit = toupper(hexDigit);

        // convert the hex digit to its corresponding decimal value.
        if(hexDigit >= '0' && hexDigit <= '9')
            hexDigit = hexDigit - '0';

        else if(hexDigit >= 'A' && hexDigit <= 'F')
            hexDigit = 10 + (hexDigit - 'A');

        else
            // invalid input, return -1.
            return -1;

        // store the decimal value in each iteration.
        decimalValue = decimalValue * 16 + (hexDigit);
    }

    // return the final value.
    return decimalValue;
}