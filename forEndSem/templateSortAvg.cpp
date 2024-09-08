#include <iostream>
using namespace std;

template <typename T>
class ArrayOperations {
private:
    T arr[100];
    int size;

public:
    ArrayOperations(T a[], int s) {
        size = s;
        for (int i = 0; i < size; i++) {
            arr[i] = a[i];
        }
    }

    void sortArray() {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (arr[j] > arr[j + 1]) { // Ascending order
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    T findAverage() {
        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum / size;
    }

    void displayArray() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {5, 3, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayOperations<int> obj(arr, size);

    cout << "Original array: ";
    obj.displayArray();

    obj.sortArray();
    cout << "Sorted array: ";
    obj.displayArray();

    cout << "Average: " << obj.findAverage() << endl;

    return 0;
}
