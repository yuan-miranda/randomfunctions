#include "../../header/main.h"

std::vector<int> GenerateEven(int range) {
    std::vector<int> even;

    for(int i = 0; i <= range; i++) {
        // check if i is even.
        if(Even(i)) {
            even.push_back(i);
        }
    }

    return even;
}