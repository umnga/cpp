#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    int operator-(const Date& birth) const {
        int age = year - birth.year;
        if (month < birth.month || (month == birth.month && day < birth.day)) {
            age--;
        }
        return age;
    }

    void getInput() {
        cout << "Enter date (day month year): ";
        cin >> day >> month >> year;
    }
};

int main() {
    Date currentDate, birthDate;

    cout << "Enter current date:\n";
    currentDate.getInput();

    cout << "Enter your birthdate:\n";
    birthDate.getInput();

    int age = currentDate - birthDate;
    cout << "Your age is: " << age << " years\n";

    return 0;
}
