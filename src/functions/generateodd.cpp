#include"../../header/main.h"

/**
 * @brief generate odd numbers
 * 
 * @param range generate odd numbers in input range.
 * @return return a integer vector of odd numbers.
 */ 
std::vector<int> GenerateOdd(int range){
    std::vector<int> odd;
    for(int i = 0; i <= range; i++){
        // check if the value has remainder
        if(i % 2 == 1){
            odd.push_back(i);
        }
    }
    return odd;
}