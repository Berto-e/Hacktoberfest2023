#include <iostream>
#include <cstdlib> // Include the library for rand()
#include <ctime>   // Include the library for time()

int main() {
    int min = 1;   // Minimum value
    int max = 100; // Maximum value
    int num;       // Variable to store the pseudo-random number

    // Initialize the pseudo-random number generator
    srand(time(0));

    // Generate a pseudo-random number in the range [min, max]
    num = min + (rand() % (max - min + 1));

    // Print the pseudo-random number
    std::cout << "Pseudo-random number: " << num << std::endl;

    return 0;
}
