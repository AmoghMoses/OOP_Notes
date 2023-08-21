#include <bits/stdc++.h>
using namespace std;

class Person {
private:
    string name;
    static int count;

public:
    Person(string name) {
        this -> name = name;
        count++;
    }

    void display() {
        cout << "Name: " << name << endl;
    }

    static int getCount() {
        return count;
    }
};

int Person::count = 0;

int main()
{
    Person p1("John");
    Person p2("Ravi");
    Person p3("Smith");

    p1.display();
    p2.display();
    p3.display();

    cout << "Total Persons: " << Person::getCount() << endl;  

    return 0;
}