#include <bits/stdc++.h>
using namespace std;

// 1. What is Object-Oriented Programming? 
// OOP is a programming paradigm where the entire software works as a bunch of objects talking to each other.

// 2. Why OOP?
// It helps us break down complex problems into smaller, more manageable problems.
// It helps us write code that is more modular, reusable, and flexible.
// Properties like inheritance, polymorphism, and encapsulation make code more efficient and easier to maintain.

// 3. What is a class?
// A class is a blueprint/design for creating objects. It defines the properties and behaviors of objects.
// A class is a user-defined data type that has data members (variables) and member functions (functions).

// 4. What is an object?
// Anything in this world that has some properties and behaviours.
// An object is an instance of a class

// When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

/* 5. The 4 Main Pillars of OOP

Always use the example TV, SmartTV, to explain the 4 pillars of OOP and Inheritance.


1. Abstraction:
Abstraction means hiding the internal details and showing only the required features to the user.
In C++, we can implement abstraction using classes, abstract classes and interfaces.
Abstraction is also achieved with the help of access specifiers: private, protected, and public.

(Data Hiding: The process of hiding the data and providing access to only the required data is known as data hiding.
It is also a form of abstraction.
Data hiding is implemented using access specifiers: private, protected, and public.
We can hide sensitive data by making it private or protected.
For accessing the private data, we need to use public member functions known as getters and setters.)

2. Encapsulation:
Encapsulation means binding everything together into a single unit.
In C++, we can implement encapsulation using classes.

3. Inheritance: (Specialization)
Inheritance is the process of creating new classes from existing classes with some additional features.
The existing class is called the base class or parent class or super class.
The new class is called the derived class or child class or sub class.
In C++, inherited classes can access the public and protected members of the base class.
(colon) : operator is used to inherit a class in C++.

4. Polymorphism: (Generalization)
Polymorphism means having many forms (referring to a set of things under same name).
In C++, we can implement polymorphism using function overloading and function overriding.

*/

/* 6. Access Specifiers:

Default access specifier for members of a class is private.

1. Private:
Private members are accessible only within the class.
They are not accessible from any derived class.
They cannot be accessed outside the class.

2. Protected:
Protected members are accessible within the class and are also accessible from any derived class.
They cannot be accessed outside the class.

3. Public:
Public members are accessible from anywhere.
They can be accessed from within the class, outside the class, and also from derived classes.

*/

/* 7. Constructors and Destructors:

1. Constructors:
A constructor is a special member function that is automatically called when an object of a class is created.
It has same name as the class and no return type.
It is used to initialize the data members of new objects.

Default Constructor:
A constructor that has no parameters is called a default constructor.

Parameterized Constructor:
A constructor that has parameters is called a parameterized constructor.

Copy Constructor:
A constructor that copies the values of one object into another object is called a copy constructor.
It is used to initialize one object from another of the same type.

The compiler provides a default constructor if we don’t define our own copy constructor. 

2. Destructors:
A destructor is a special member function that is automatically called when an object of a class is destroyed.
It has same name as the class but with a tilde (~) symbol before it and no return type.
It is used to free up the memory allocated to the object.
We cannot define more than one destructor in a class.

*/

/* 8. More about Inheritance:

Types of Inheritance:

1. Single Inheritance: A derived class with only one base class.
Syntax: class DerivedClass : accessSpecifier BaseClass { ... };

2. Multiple Inheritance: A derived class with more than one base class.
Syntax: class DerivedClass : accessSpecifier BaseClass1, accessSpecifier BaseClass2 { ... };

3. Multilevel Inheritance: A class derived from another derived class (which is derived from a base class).
Syntax: class DerivedClass1 : accessSpecifier BaseClass { ... };
        class DerivedClass2 : accessSpecifier DerivedClass1 { ... };

4. Hierarchical Inheritance: A class with more than one derived class.
Syntax: class BaseClass { ... };
        class DerivedClass1 : accessSpecifier BaseClass { ... };
        class DerivedClass2 : accessSpecifier BaseClass { ... };

5. Hybrid Inheritance: A combination of multiple inheritance and multilevel inheritance.


Modes of Inheritance:

1. Public Mode:
If we derive a subclass from a public base class, then it is public mode.
In this case, all the public members of the base class will be public in the derived class.
All the protected members of the base class will be protected in the derived class.
All the private members of the base class will not be accessible in the derived class.

2. Protected Mode:
If we derive a subclass from a protected base class, then it is protected mode.
In this case, all the public members of the base class will be protected in the derived class.
All the protected members of the base class will be protected in the derived class.
All the private members of the base class will not be accessible in the derived class.

3. Private Mode:
If we derive a subclass from a private base class, then it is private mode.
In this case, all the public members of the base class will be private in the derived class.
All the protected members of the base class will be private in the derived class.
All the private members of the base class will not be accessible in the derived class.

*/

class TV 
{
    private:
        int channel;
        int volume;

    public:
        TV() // Default Constructor
        {
            cout << "TV object created with default values" << endl;
            channel = 1;
            volume = 1;
        }

        TV(int c, int v) // Parameterized Constructor
        {
            cout << "TV object created with parameters" << endl; 
            channel = c;
            volume = v;
        }

        TV(TV &t) // Copy Constructor
        {
            cout << "TV object created by copying values from another TV object" << endl;
            channel = t.channel;
            volume = t.volume;
        }

        ~TV() // Destructor
        {
            cout << "TV object destroyed" << endl;
        }

        // Getters and Setters (Data Hiding)
        void setChannel(int c) { channel = c; }
        void setVolume(int v) { volume = v; }
        int getChannel() { return channel; }
        int getVolume() { return volume; }

        // Behaviours (Member Functions)
        // We can define the functions inside the class itself or outside the class using scope resolution operator (::)
        void increaseVolume();
        void decreaseVolume();

        // Function Overloading
        // We can have multiple functions with the same name but different parameters (in number, type, or order)
        void changeChannel()
        {
            channel++;
            cout << "Channel number increased by 1 " << endl;
        }
        
        void changeChannel(int c) 
        { 
            channel = c; 
            cout << "Channel changed to " << channel << endl;
        }
};

// Defining the functions outside the class using scope resolution operator (::)
void TV :: increaseVolume()
{
    volume++;
}

void TV :: decreaseVolume()
{
    volume--;
}

// Inheriting the class TV to create a new class SmartTV
class SmartTV : public TV // Inheriting the class TV
{
    private:
        string operatingSystem;

    public:
        SmartTV() // Default Constructor
        {
            cout << "SmartTV object created with default values" << endl;
            operatingSystem = "Android";
        }

        SmartTV(int c, int v, string os) : TV(c, v) // Parameterized Constructor
        {
            cout << "SmartTV object created with parameters" << endl; 
            operatingSystem = os;
        }

        void browse()
        {
            cout << "Browsing the internet" << endl;
        }
};

// SEE ABOUT NESTED CLASSES ALSO ONCE

int main()
{
    // Creating an object of the class TV
    TV tv1; // Default Constructor is called
    cout << tv1.getChannel() << endl; // 1
    cout << tv1.getVolume() << endl; // 1

    tv1.setChannel(5);
    tv1.setVolume(10);

    cout << tv1.getChannel() << endl; // 5  
    cout << tv1.getVolume() << endl; // 10

    // TV tv2(5, 10); // Parameterized Constructor is called


    return 0;
}

// Other Important Topics to be covered:

// 6. Abstract Classes
// 7. Interfaces
// 9. Exception Handling

