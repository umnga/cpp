#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    // Constructor to initialize count
    Counter() : count(0) {}

    // Prefix ++ overloading
    Counter& operator++() {
        ++count;  // Increment count
        return *this;  // Return the updated object
    }

    // Postfix ++ overloading
    Counter operator++(int) {
        Counter temp = *this;  // Save the current state
        count++;  // Increment count
        return temp;  // Return the old state (before increment)
    }

    // Function to display the count
    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;

    ++c;  // Prefix increment
    c.display();  // Output: Count: 1

    c++;  // Postfix increment
    c.display();  // Output: Count: 2

    return 0;
}
