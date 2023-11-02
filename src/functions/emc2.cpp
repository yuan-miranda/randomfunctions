#include"../../header/main.h"

const std::uint64_t SPEED_OF_LIGHT = 299792458; // meters per second (m/s)

/**
 * @brief calculate the amount of energy(joules) a mass(kilogram) has.
 * the max input is 205kg before getting integer overflow lol.
 * 
 * @param massKg mass in Kilogram unit. Max input is 205kg before getting integer overflow.
 * @return return the joules of the input kilogram.
 */ 
std::uint64_t Emc2(int massKg){
    // E = mc^2 or E = m * (c * c)
    return massKg * (SPEED_OF_LIGHT * SPEED_OF_LIGHT);
}