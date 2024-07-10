#include <cstdlib>
#include <ctime>

extern "C" {
    int generate_random_number(int min_value, int max_value) {
        std::srand(std::time(nullptr));
        return min_value + std::rand() % (max_value - min_value + 1);
    }
}
