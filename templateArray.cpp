#include <iostream>
template <typename T, size_t N>
T findLargest(T (&arr)[N]) {
    T largest = arr[0];
    for (size_t i = 1; i < N; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int intArr[] = {10, 20, 30, 40, 50};
    std::cout<<findLargest(intArr) << std::endl;

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout<<findLargest(doubleArr) << std::endl;

    return 0;
}
