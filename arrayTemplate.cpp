#include <iostream>
using namespace std;

template <typename T>
void sorted(T a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

int main() {
    int a[5] = {32, 54, 36, 118, 10};
    int size = sizeof(a) / sizeof(a[0]);
    sorted(a, size);
    cout << "sorted array: \n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;  // Add an endl for better formatting
    return 0;
}
