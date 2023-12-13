#include "../../header/main.h"

const std::uint64_t SPEED_OF_LIGHT = 299792458;

std::uint64_t EmcSquared(int massKg) {
    // E = mc^2
    return massKg * (SPEED_OF_LIGHT * SPEED_OF_LIGHT);
}