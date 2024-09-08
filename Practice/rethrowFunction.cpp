#include <iostream>
#include <stdexcept>

// Function to read two double type numbers from the keyboard
void readNumbers(double& num1, double& num2) {
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
}

// Function to calculate the division of these two numbers
double divide(double num1, double num2) {
    try {
        if (num2 == 0) {
            throw std::runtime_error("Error: Division by zero!");
        }
        return num1 / num2;
    }
    catch (const std::runtime_error& e) {
        // Catch the exception inside the divide function and rethrow it
        std::cout << "Exception caught in divide function: " << e.what() << std::endl;
        throw; // Rethrow the exception to be caught in main
    }
}

int main() {
    double number1, number2, result;

    // Read numbers from the user
    readNumbers(number1, number2);

    // Try dividing the numbers and handle any potential exception
    try {
        result = divide(number1, number2);
        std::cout << "Result of division: " << result << std::endl;
    } 
    catch (const std::exception& e) {
        // Catch rethrown exception in main
        std::cout << "Exception caught in main: " << e.what() << std::endl;
    }

    return 0;
}
