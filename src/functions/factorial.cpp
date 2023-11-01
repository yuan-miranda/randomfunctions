#include"../../header/main.h"

/**
 * @brief calculate the factorial the input number.
 * 
 * @param number number to check.
 * @return return the factorial of the input.
 */ 
int Factorial(int number){
    int result = 1;
    // multiply i with the result
    for(int i = 1; i <= number; i++)
        result = result * i;
    return result;
}