#include"../../header/main.h"

/**
 * @brief generate even numbers
 * 
 * @param range generate even numbers in input range.
 * @return return a integer vector of even numbers.
 */ 
std::vector<int> GenerateEven(int range){
    std::vector<int> even;
    for(int i = 0; i <= range; i++){
        // check if the value has no remainder
        if(i % 2 == 0){
            even.push_back(i);
        }
    }
    return even;
}