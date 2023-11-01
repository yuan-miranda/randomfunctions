#include"../../header/main.h"

/**
 * @brief check if the input number is odd.
 * 
 * @param number number to check.
 * @return return true if odd, else false.
 */ 
bool Odd(int number){
    // check if the value has remainder
    if(number % 2 == 1)
        return true;
    return false;
}