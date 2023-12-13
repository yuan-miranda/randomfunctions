#include "../../header/main.h"

std::vector<int> GenerateOdd(int range) {
    std::vector<int> odd;

    for(int i = 0; i <= range; i++) {
        // check if i is odd.
        if(Odd(i)) {
            odd.push_back(i);
        }
    }

    return odd;
}