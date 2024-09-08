#include <iostream>
using namespace std;
template <typename T>
class Calculator {
private:
    T num1, num2;
public:
    Calculator(T a, T b) : num1(a), num2(b) {}

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }
};

int main() {
    Calculator intCalc(10, 5);
    Calculator doubleCalc(10.5, 5.2);

    cout << "Int addition: " << intCalc.add() << endl;
    cout << "Int subtraction: " << intCalc.subtract() << endl;

    cout << "Double addition: " << doubleCalc.add() << endl;
    cout << "Double subtraction: " << doubleCalc.subtract() << endl;

    return 0;
}
