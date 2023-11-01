// meth
#include<iostream>
#include<vector>
#include"../header/main.h"

int main(){
    // variables to use as example
    int a = 35, b = 10;
    int factorialVal = 5;
    std::vector<int> generatedOdds = GenerateOdd(100);
    std::vector<int> generatedEvens = GenerateEven(100);
    std::string hexValue = "0x80"; // w/o "0x" prefix

    // gcd
    std::cout << "GCD(" << a << ", " << b << ") = " << GCD(a, b) << std::endl;

    // factorial
    std::cout << factorialVal << "! = " << Factorial(factorialVal) << std::endl;

    // odd
    if(Odd(a))
        std::cout << a << " is odd" << std::endl;

    // even
    else if(Even(a))
        std::cout << a << " is even" << std::endl;

    // lcm
    std::cout << "LCM(" << a << ", " <<  b << ") = " << LCM(a, b) << std::endl;
    
    // generate odd numbers
    for(int odds : generatedOdds)
        std::cout << odds << ", ";
    std::cout << std::endl;
    
    // generate even numbers
    for(int evens : generatedEvens)
        std::cout << evens << ", ";
    std::cout << std::endl;

    // convert base16 to base10
    std::string result = Base16ToBase10(hexValue);
    std::cout << (result != "-1" ? result : "error: input is not hex");

    return 0;
}