#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    int x;
    int y;

    Base(int x, int y) {
        this -> x = x;
        this -> y = y;
    }

    void func() const {
        cout << "Hello World!" << endl;

        // x = 10; // Error
    }

    void setX(int x_val) {
        x = x_val;
    }

    void display() {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }

};

int main()
{
    Base b1(1, 2);
    b1.display();

    b1.setX(10);
    b1.func();

    b1.display();

    return 0;
}