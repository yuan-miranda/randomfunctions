#include"../../header/main.h"

/**
 * @brief converts base16(hex) to base10(decimal) and can calculate up to
 * 16 hex digit or 64 bit(std::uint64_t).
 * 
 * @param hexString hexadecimal input.
 * @return return the decimal value in string and "-1" for non-hex input.
 */ 
std::string Base16ToBase10(std::string hexString){
    std::uint64_t decimalValue = 0;

    // removes "0x" prefix if there is
    if (hexString.substr(0, 2) == "0x")
        hexString = hexString.substr(2);
    
    // iterates through each char in hexString
    for (char hexDigit : hexString) {
        hexDigit = toupper(hexDigit);

        // convert the hex digit to its corresponding decimal value
        if(hexDigit >= '0' && hexDigit <= '9')
            hexDigit = hexDigit - '0';
        else if(hexDigit >= 'A' && hexDigit <= 'F')
            hexDigit = 10 + (hexDigit - 'A');
        else
            // invalid input
            return "-1";
        
        // store the decimal value in each iteration
        decimalValue = decimalValue * 16 + (hexDigit);
    }

    // return the final value in string type
    return std::to_string(decimalValue);
}