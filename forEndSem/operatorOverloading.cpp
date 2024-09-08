/*Write a program to define a class which can represent time following members:
Private Data members: HH which stores time in hours, MM which stores time in minutes
Default, parameterized and copy constructor
setTime(int a, int b) – which sets values in HH and MM
getHH()-returns HH
getMM()-returns MM
Implement Operator Overloading (operator >) in the class using member function and friend function. If a time is greater than another time, it returns 1 else returns 0. Write a well driven program.
*/

#include <iostream>

class Time {
private:
    int HH; // Hours
    int MM; // Minutes

public:
    // Default Constructor
    Time() : HH(0), MM(0) {}

    // Parameterized Constructor
    Time(int a, int b) : HH(a), MM(b) {}

    // Copy Constructor
    Time(const Time& t) : HH(t.HH), MM(t.MM) {}

    // Setter function
    void setTime(int a, int b) {
        HH = a;
        MM = b;
    }

    // Getter function for HH
    int getHH() const {
        return HH;
    }

    // Getter function for MM
    int getMM() const {
        return MM;
    }

    // Member function for operator overloading
    bool operator>(const Time& t) const {
        if (HH > t.HH) return true;
        if (HH == t.HH && MM > t.MM) return true;
        return false;
    }

    // Friend function for operator overloading
    friend bool operator>(const Time& t1, const Time& t2);
};

// Friend function definition
bool operator>(const Time& t1, const Time& t2) {
    if (t1.HH > t2.HH) return true;
    if (t1.HH == t2.HH && t1.MM > t2.MM) return true;
    return false;
}

int main() {
    // Create Time objects
    Time t1(10, 30);
    Time t2(9, 45);
    Time t3 = t1; // Copy constructor

    // Display times
    std::cout << "Time 1: " << t1.getHH() << ":" << t1.getMM() << std::endl;
    std::cout << "Time 2: " << t2.getHH() << ":" << t2.getMM() << std::endl;
    std::cout << "Time 3 (Copy of Time 1): " << t3.getHH() << ":" << t3.getMM() << std::endl;

    // Compare times using overloaded operator
    if (t1 > t2) {
        std::cout << "Time 1 is greater than Time 2" << std::endl;
    } else {
        std::cout << "Time 1 is not greater than Time 2" << std::endl;
    }

    if (t1 > t3) {
        std::cout << "Time 1 is greater than Time 3" << std::endl;
    } else {
        std::cout << "Time 1 is not greater than Time 3" << std::endl;
    }

    return 0;
}

