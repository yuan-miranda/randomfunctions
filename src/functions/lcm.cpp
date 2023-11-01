#include"../../header/main.h"

/**
 * @brief calculate the Least Common Multiple of 2 input numbers.
 * 
 * @param num1 first number.
 * @param num2 second number.
 * @return return the LCM of the input.
 */ 
int LCM(int num1, int num2){
    return (num1*num2) / GCD(num1, num2);
}