#include <bits/stdc++.h>
using namespace std;

class Base {
private:
    int age;
    int rollNo;
    double x;

public:
    Base(int rollNo, int age, double x) {
        this -> rollNo = rollNo;
        this -> age = age;
        this -> x = x;
    }

    // Base(Base &b) {
    //     cout << "Copy Constructor" << endl;
    //     age = b.age;
    //     rollNo = b.rollNo;
    //     x = b.x;
    // }

    ~Base() {
        cout << "   Destructor" << endl;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
        cout << "X: " << x << endl;
    }

    Base() {
        cout << "Default Constructor" << endl;
        age = 0;
        rollNo = 0;
        x = 0.0;
    }

    void setRollNo(int rollNo) {
        this -> rollNo = rollNo;
    }

    int getRollNo() {
        return rollNo;
    }
};

int main()
{
    Base b1;
    b1.display();

    // Base b2(b1);
    // b2.display();
    // b1.setRollNo(2);
    // b1.display();

    return 0;
}