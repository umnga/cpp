#include <iostream>
using namespace std;

void divide(int numerator, int denominator) {
    try {
        if (denominator == 0) {
            throw "Cannot divide by zero!";
        }
        cout << "Result: " << numerator / denominator << endl;
    } catch (const char* e) {
        cout << "Error in divide function: " << e << endl;
        throw;  // Rethrow the same error
    }
}

int main() {
    try {
        divide(10, 0);  // This will cause an error
    } catch (const char* e) {
        cout << "Caught in main: " << e << endl;  // Handle the error here
    }
    return 0;
}
