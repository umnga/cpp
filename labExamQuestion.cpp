#include <iostream>
#include <ctime>

class Date {
private:
    int year, month, day;

public:
    // Constructor to initialize the date
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    // Operator overloading to calculate age
    int operator-(const Date& birthDate) {
        // Get the current date from the system
        time_t t = time(0);
        tm* now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        int currentMonth = now->tm_mon + 1;
        int currentDay = now->tm_mday;

        // Calculate the age
        int age = currentYear - birthDate.year;
        if (currentMonth < birthDate.month || 
           (currentMonth == birthDate.month && currentDay < birthDate.day)) {
            age--;
        }

        return age;
    }
};

int main() {
    // Create a birth date (YYYY, MM, DD)
    Date birthDate(2000, 5, 10);

    // Create today's date (could also use system date as shown above)
    Date today(2024, 9, 6);

    // Calculate the age
    int age = today - birthDate;

    std::cout << "The person is " << age << " years old." << std::endl;
    return 0;
}
