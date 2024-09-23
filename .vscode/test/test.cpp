#include <iostream>
#include <cstdlib>  // For using atoi to convert strings to numbers

int main(int argc, char *argv[]) {
    // Check if enough arguments are provided
    if (argc < 3) {
        std::cout << "Please provide at least two numeric arguments\n";
        return 1;  // Exit the program
    }

    // Get command-line arguments and convert them to integers
    int num1 = std::atoi(argv[1]);  // argv[1] is the first argument
    int num2 = std::atoi(argv[2]);  // argv[2] is the second argument

    // Simple addition operation

    // Display the result
    std::cout << "The sum of the two numbers is: " << sum << std::endl;

    return 0;
}
