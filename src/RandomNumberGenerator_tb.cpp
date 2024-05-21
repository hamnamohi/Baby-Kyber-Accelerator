#include <iostream>
#include <cstdlib>
#include <ctime>

#define MIN_VALUE -17
#define MAX_VALUE 17

int main() {
    srand(time(0));  // Initialize random seed

    for (int i = 0; i < 1; ++i) { // Generate 10 random numbers for testing
        int rand_num = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);
        std::cout << rand_num << std::endl;
    }

    return 0;
}
