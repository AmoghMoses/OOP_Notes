#include <bits/stdc++.h>
using namespace std;

/* 9. More about Polymorphism:

Two types of Polymorphism:

1. Compile Time Polymorphism:
Compile time polymorphism is also known as static polymorphism / early binding / STATIC BINDING.
It is achieved by function overloading and operator overloading.
Decision is made at compile time.

2. Run Time Polymorphism:
Run time polymorphism is also known as dynamic polymorphism / late binding / DYNAMIC BINDING.
It is achieved by function overriding/ virtual fucntions.
Decision is made at run time.

Function Overloading: 
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.
Function overloading can be done by changing the number of arguments or by changing the data type of the arguments.

Operator Overloading:
Operator overloading is a feature in C++ where an operator can be redefined to work on user-defined data types.
For example, we can overload the + operator to concatenate two strings.
Example: cout << "Hello" + "World" << endl;

Function Overriding:
Function overriding is a feature in C++ where a derived class can provide its own definition of a function that is already defined in the base class.

*/

/* 10. Virtual Functions:

A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class. It tells the compiler to 
perform late binding where the compiler matches the object with the right called function and executes it during the runtime
When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.
 
*/

class base 
{
    public:
        virtual void print() { cout << "print base class\n"; }
    
        void show() { cout << "show base class\n"; }
};
 
class derived : public base 
{
    public:
        void print() { cout << "print derived class\n"; }
    
        void show() { cout << "show derived class\n"; }
};
 
int main()
{
    base* bptr;
    derived d;
    bptr = &d;
 
    // Virtual function, binded at runtime
    bptr->print();
 
    // Non-virtual function, binded at compile time
    bptr->show();

    // d.show();
    // d.print();
    
 
    return 0;
}