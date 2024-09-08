#include <iostream>
using namespace std;

template <typename T> 
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    cout << myMax(3, 7) << endl;       // Type deduced as int
    cout << myMax(3.2, 7.4) << endl;   // Type deduced as double
    cout << myMax('r', 'o') << endl;   // Type deduced as char
    return 0;
}
