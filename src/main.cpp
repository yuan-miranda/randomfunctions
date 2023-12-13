#include "../header/main.h"

int main() {
    // example use of the functions.
    
    int arr[] = {1, 2, 4, 5, 6, 10, 13};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << BinarySearchArray(arr, 0, n - 1, target) << std::endl;

    std::cout << EmcSquared(205) << std::endl;

    std::cout << Even(4) << std::endl;

    std::cout << Factorial(5) << std::endl;

    std::cout << GCD(54, 68) << std::endl;

    for(int num : GenerateEven(50)) {
        std::cout << num << ", ";
    }
    std::cout << std::endl;

    for(int num : GenerateOdd(50)) {
        std::cout << num << ", ";
    }
    std::cout << std::endl;

    std::cout << HexToDec("423476F") << std::endl;

    std::cout << LCM(34, 50) << std::endl;

    std::cout << Odd(39) << std::endl;

    return 0;
}