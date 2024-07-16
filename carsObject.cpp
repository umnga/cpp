#include<iostream>
using namespace std;
class car{
public: 
    string brand;
    string model;
    int year;

    void displayData(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){
    car c1;
    c1.brand = "BMW";
    c1.model = "X5";
    c1.year = 2018;
    c1.displayData();
    return 0;
}