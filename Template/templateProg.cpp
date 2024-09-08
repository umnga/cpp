#include <iostream>
template <class T>
class myPair {
    T a, b;
public:
    myPair(T first, T second) {
        a = first;
        b = second;
    }
    T getmax(); 
};

template <class T>
T myPair<T>::getmax() {
    return (a > b) ? a : b;
}

int main() {
    myPair<int> myObj(100, 75);
    std::cout << myObj.getmax() << std::endl;
    return 0;
}
