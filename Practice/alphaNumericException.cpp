#include <iostream>
#include <stdexcept>
#include <cctype>

int main() {
    char input;
    
    try {
        std::cout << "Enter a character: ";
        std::cin >> input;
        
        if (std::isalpha(input)) {
            std::cout << "Welcome!" << std::endl;
        } else if (std::isdigit(input)) {
            throw std::runtime_error("Error: Numeric input is not allowed.");
        } else {
            std::cout << "Neither alphabetic nor numeric character entered." << std::endl;
        }
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}