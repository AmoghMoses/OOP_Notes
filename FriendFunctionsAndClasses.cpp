#include <bits/stdc++.h>
using namespace std;

/* 14. Friend Functions and Classes:

Friend Functions: 
Friend functions are functions that are not members of a class but have access to the class's private and protected members.
Friend functions are not in the scope of the class, of which they are friends.
Friend functions are declared using the keyword friend.
Friend functions cannot be used to access the private members of a class directly.
They are required to be called using the object_name.member_name syntax.

Friend Classes:
A friend class can access both private and protected members of the class in which it has been declared as friend.
Friendship is not mutual. If class A is a friend of class B, then class B does not become a friend of class A automatically.

*/

/*
Shallow copy:
Shallow copy creates a new object which has an exact copy of the values in the original object.
If the original object has any pointer to memory allocations, then the pointer in the new object will also point to the same memory address.

Deep copy:
Deep copy creates a new object and also dynamically allocates memory to the pointer variables of the object.
It then copies the values from the original object to the newly created object.

Java instanceof:
The java instanceof operator is used to test whether the object is an instance of a particular class or not.
Returns true if the object is an instance of the class or any of its subclasses; otherwise, returns false.


*/

class A
{
    private:
        int a;
    
    public:
        A() 
        { 
            a = 0; 
            cout << "Constructor of A Called" << endl; 
        }

        friend void showA(A &); // Friend Function
        friend void modifyA(A &, int); // Friend Function

        friend class B; // Friend Class
};

void showA(A &obj)
{
    cout << "A::a = " << obj.a << endl;
}

void modifyA(A &obj, int y)
{
    obj.a = y;
}

class B
{
    public:
        void modifyAFromB(A &obj, int y)
        {
            obj.a = y;
        }

};

int main()
{
    A aObj;
    showA(aObj);

    modifyA(aObj, 10);
    showA(aObj);
    
    B bObj;
    bObj.modifyAFromB(aObj, 20);
    showA(aObj);

    return 0;
}