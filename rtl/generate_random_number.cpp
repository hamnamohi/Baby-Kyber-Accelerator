#include <cstdlib>
#include <ctime>

struct InitRandom {
    InitRandom() { std::srand(std::time(nullptr)); }
} initRandom;

extern "C" int generate_random_number(int min_value, int max_value) {
    return min_value + std::rand() % (max_value - min_value + 1);
}
