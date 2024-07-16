#include <iostream>
template <class T, class X>
T findLargest(T arr[], X size) {
    T largest = arr[0];
    for (X i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    std::cout<< findLargest(arr1, 5) << std::endl;

    double arr2[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout<< findLargest(arr2, 5) << std::endl;

    return 0;
}
