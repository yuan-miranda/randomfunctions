#include "../../header/main.h"

int LCM(int a, int b) {
    // LCM(a, b) = (a x b) / GCD(a, b)
    return (a * b) / GCD(a, b);
}