#include <iostream>
using namespace std;

// Function to calculate the area of a rectangle
void calculateArea(int &length, int &width, int &area) {
    area = length * width;
}

int main() {
    int length, width, area;

    // Input length and width of the rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Call the function to calculate the area
    calculateArea(length, width, area);

    // Output the area of the rectangle
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
