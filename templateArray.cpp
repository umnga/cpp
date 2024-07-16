#include <iostream>
template <class T>
T findLargest(T arr[5]) {
    T largest = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int intArr[5] = {10, 20, 30, 40, 50};
    std::cout<< findLargest(intArr) << std::endl;

    double doubleArr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout<< findLargest(doubleArr) << std::endl;

    return 0;
}
