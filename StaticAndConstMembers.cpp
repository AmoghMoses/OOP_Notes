#include <bits/stdc++.h>
using namespace std;

/* 11. Static and Const Members:

Static Members:
Static members are class members that are shared by all objects of the class.
Static members are declared using the keyword static.
There is only one copy of static field created in the memory. It is shared to all the objects.
Static members can be accessed using the class name and the scope resolution operator ::.

Const Members:
Const members are members of a class that cannot be modified.
Const equivalent in Java is final.

*/

/* Good to know:

12. Templates:

C++ supports a powerful feature known as a template to implement the concept of generic programming.
A template allows us to create a family of classes or family of functions to handle different data types.
Template classes and functions eliminate the code duplication of different data types and thus makes the development easier and faster.
Multiple parameters can be used in both class and function template.
Template functions can also be overloaded.
Templates are expanded at compile time.

*/

/* 13. This Pointer/Keyword:

In C++, this is a keyword that refers to the current object.
It is a local object pointer that is available in all member functions except static member functions.

*/

/*
Difference between class and structure in C++:

1. Members of a class are private by default and members of a structure are public by default.
*/

class Account
{   
    private: 
        int accNo;
        const int rate = 5; 
        static int count; // Static Member

    public:

        Account(int accNo)
        {
            this->accNo = accNo;
            count++;
        }

        void show()
        {
            cout << "Account Number: " << accNo << endl;
            cout << "Rate: " << rate << endl;
            cout << "Count: " << count << endl;
        }

        static void func() // Static Member Function
        {
            cout << "Hello World!" << endl;
        }
};

int Account::count = 0;

int main()
{
    Account a1(1);
    // a1.show();

    // Account a2(2);
    // a2.show();    

    // a1.func();
    Account::func();

    return 0;
}