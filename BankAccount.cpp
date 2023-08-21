#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accountNumber, double balance) {
        this -> accountNumber = accountNumber;
        this -> balance = balance;
    }

    static void func() {
        cout << "Hello World!" << endl;
    }
    
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance < amount)
            cout << "Insufficient balance!" << endl;
        else
            balance -= amount;
    }

    void deposit(double amount) {
        balance += amount;
    }
};

int main()
{
    // BankAccount b1("123", 20000.0);
    // b1.display();

    // b1.withdraw(5000.0);
    // b1.display();

    // b1.deposit(10000.0);
    // b1.display();

    // b1.withdraw(50000.0);
    // b1.display();
    BankAccount::func();

    return 0;
}