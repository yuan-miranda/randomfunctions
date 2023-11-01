#include"../../header/main.h"

/**
 * @brief calculate the Greatest Common Divisor of 2 input numbers.
 * 
 * @param num1 first number.
 * @param num2 second number.
 * @return return the GCD of the input.
 */ 
int GCD(int num1, int num2){
    if(num1 == 0)
        return num2;
    return GCD(num2 % num1, num1);
}