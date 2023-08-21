#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double radius) {
        this -> radius = radius;
    }

    void area() {
        cout << "Area of circle = " << 3.14 * radius * radius << endl; 
    }

    void perimeter() {
        cout << "Perimeter of circle = " << 2 * 3.14 * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int length, int breadth) {
        this -> length = length;
        this -> breadth = breadth;
    }

    void area() {
        cout << "Area of rectangle = " << length * breadth << endl;
    }

    void perimeter() {
        cout << "Perimeter of rectangle = " << 2 * (length + breadth) << endl;
    }
};

int main() {
    Shape* s1 = new Circle(5.0);
    s1 -> area();
    s1 -> perimeter();

    // Shape* s2 = new Rectangle(10, 5);
    // s2 -> area();
    // s2 -> perimeter();

    Rectangle r2(15, 50);
    // r2.area();

    s1 = &r2;
    s1 -> area();
    s1 -> perimeter();
    
    return 0;
}