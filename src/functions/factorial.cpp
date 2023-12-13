#include "../../header/main.h"

int Factorial(int number) {
    int result = 1;
    
    // multiply i with the result.
    for(int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}