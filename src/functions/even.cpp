#include"../../header/main.h"

/**
 * @brief check if the input number is even.
 * 
 * @param number number to check.
 * @return return true if even, else false.
 */ 
bool Even(int number){
    // check if the value has no remainder
    if(number % 2 == 0)
        return true;
    return false;
}