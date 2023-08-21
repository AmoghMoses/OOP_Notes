#include <bits/stdc++.h>
using namespace std;

/* 15. Abstract Classes

Virtual Function: A virtual function is a member function which is declared within a base class
and is re-defined(Overriden) by a derived class. When you refer to a derived class object using
a pointer or a reference to the base class, you can call a virtual function for that object and
execute the derived class’s version of the function.

Sometimes implementation of all functions cannot be provided in a base class because we don’t 
know the implementation. Such a class is called abstract class. For example, let Shape be a 
base class. We cannot provide implementation of function draw() in Shape, but we know every
derived class must have implementation of draw().

A class with atleast one pure virtual function is called abstract class.

A pure virtual function (or abstract function) in C++ is a virtual function for which we don’t
have implementation, we only declare it.
A pure virtual function is specified by placing "= 0" in its declaration. 
A class containing a pure virtual function is called an abstract class.

We cannot create objects of abstract classes. However, 
We can have pointers and references of abstract class type. If we do not override the pure
virtual function in derived class, then derived class also becomes abstract class.

Interfaces:
An interface is a class that has only abstract methods. The methods exist only with their
signatures and no implementation body.

https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-57/

*/

// This class becomes abstract because of a pure virtual function
class Shape
{
    public:
        virtual void draw() = 0;
};

class Rectangle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing rectangle...\n";
        }
};

class Circle : public Shape
{
    public:
        void draw()
        {
            cout << "drawing circle...\n";
        }
};

int main()
{
    // Shape s; // Error
    Shape* s;
    Rectangle r;
    Circle c;

    s = &r;
    s->draw();

    s = &c;
    s->draw();

    return 0;
}