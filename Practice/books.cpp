/* Implement books issuing components of a library. Define a class "Book" having data
 members: 'oname" and"authoy'' both of type string.
 Derive two class o'referenceBook" and"issuableBoOk" having following details:
 genre: store genre details of the book (string)
 lateReturn: store number of days of late submission of book
 line:Integer data member to store fine amount. Reference books can be issued for
 1 day and a fine of Rs. Slday after I day. Issuable books can be issued for 30 days and fine
 ofRe. l/day after 30 days.
 issuelD: Unique integer data member (starts with I and auto incremented by I in
 every issue)
 Implement run time polymorphism to display information about I issuable book (late
 return by 5 days) and I reference book (late return by 2 days) [implement appropriate
 methods in the classes to perform the operation*/
#include <iostream>
#include <string>
using namespace std;

// Base class Book
class Book {
protected:
    string name;
    string author;

public:
    Book(string n, string a) : name(n), author(a) {}
    
    // Virtual function to display details
    virtual void display() const = 0;
    
    virtual ~Book() {} // Virtual destructor
};

// Derived class ReferenceBook
class ReferenceBook : public Book {
    string genre;
    int lateReturn;
    int fine;

public:
    ReferenceBook(string n, string a, string g, int late)
        : Book(n, a), genre(g), lateReturn(late), fine(0) {}

    void calculateFine() {
        if (lateReturn > 1) {
            fine = (lateReturn - 1) * 5; // Rs. 5 per day after 1 day
        }
    }

    void display() const override {
        cout << "Reference Book: " << name << " by " << author << "\n"
             << "Genre: " << genre << "\n"
             << "Late Return: " << lateReturn << " days\n"
             << "Fine: Rs. " << fine << endl;
    }
};

// Derived class IssuableBook
class IssuableBook : public Book {
    string genre;
    int lateReturn;
    int fine;
    int issueID;
    static int nextID; // Static member to track issue IDs

public:
    IssuableBook(string n, string a, string g, int late)
        : Book(n, a), genre(g), lateReturn(late), fine(0), issueID(++nextID) {}

    void calculateFine() {
        if (lateReturn > 30) {
            fine = (lateReturn - 30) * 1; // Rs. 1 per day after 30 days
        }
    }

    void display() const override {
        cout << "Issuable Book: " << name << " by " << author << "\n"
             << "Genre: " << genre << "\n"
             << "Issue ID: " << issueID << "\n"
             << "Late Return: " << lateReturn << " days\n"
             << "Fine: Rs. " << fine << endl;
    }
};

// Initialize static member
int IssuableBook::nextID = 0;

int main() {
    // Create objects for IssuableBook and ReferenceBook
    IssuableBook iBook("C++ Primer", "Lippman", "Programming", 35); // 35 days late
    ReferenceBook rBook("Encyclopedia", "Britannica", "General", 3); // 3 days late

    // Calculate fines
    iBook.calculateFine();
    rBook.calculateFine();

    // Using polymorphism to display book info
    Book* books[2];
    books[0] = &iBook;
    books[1] = &rBook;

    for (int i = 0; i < 2; i++) {
        books[i]->display();
        cout << endl;
    }

    return 0;
}
