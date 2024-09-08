#include <iostream>
#include <string>
using namespace std;

// Base class Account
class Account {
protected:
    string customerName;
    int accountNumber;
    float balance;

public:
    // Constructor
    Account(string name, int accNo, float bal) : customerName(name), accountNumber(accNo), balance(bal) {}

    // Function to display balance
    void displayBalance() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Pure virtual functions to be overridden by derived classes
    virtual void deposit(float amount) = 0;
    virtual void withdraw(float amount) = 0;

    // Virtual destructor
    virtual ~Account() {}
};

// Derived class for saving account
class SavingAccount : public Account {
private:
    float interestRate;

public:
    // Constructor
    SavingAccount(string name, int accNo, float bal, float rate) : Account(name, accNo, bal), interestRate(rate) {}

    // Function to accept deposit
    void deposit(float amount) override {
        balance += amount;
        cout << "Deposited $" << amount << " to saving account." << endl;
    }

    // Function to compute and deposit interest
    void computeInterest() {
        float interest = (balance * interestRate) / 100;
        balance += interest;
        cout << "Interest of $" << interest << " has been added to saving account." << endl;
    }

    // Function to withdraw money
    void withdraw(float amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from saving account." << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

// Derived class for current account
class CurrentAccount : public Account {
public:
    // Constructor
    CurrentAccount(string name, int accNo, float bal) : Account(name, accNo, bal) {}

    // Function to accept deposit
    void deposit(float amount) override {
        balance += amount;
        cout << "Deposited $" << amount << " to current account." << endl;
    }

    // Function to withdraw money
    void withdraw(float amount) override {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrew $" << amount << " from current account." << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    // Create a saving account
    SavingAccount savingAcc("John Doe", 12345, 1000.0, 5.0);

    // Deposit money and compute interest
    savingAcc.deposit(500);
    savingAcc.computeInterest();
    savingAcc.displayBalance();

    // Withdraw money
    savingAcc.withdraw(200);
    savingAcc.displayBalance();

    // Create a current account
    CurrentAccount currentAcc("Jane Smith", 54321, 2000.0);

    // Deposit money and withdraw money
    currentAcc.deposit(1000);
    currentAcc.withdraw(500);
    currentAcc.displayBalance();

    return 0;
}