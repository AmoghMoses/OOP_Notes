#include <bits/stdc++.h>
using namespace std;

class ArithmeticException : public exception {
    ArithmeticException() { 
        cout << "Divide by zero exception" << endl;
    }
};

class Test {
    int x, y;

public:
    Test(int x, int y) {
        this -> x = x;
        this -> y = y;
    }

    void divide() {
        try {
            // if (y == 0) {
            //     throw 0;
            // }
            // else {
            //     cout << x / y << endl;
            // }
            int res = x / y;
            cout << res << endl;
        }
        catch (ArithmeticException e) {
            // cout << "Divide by zero exception" << endl;
            cout << "Exception caught" << endl;
        }
    }
};

int main()
{
    Test t(10, 0);
    t.divide();

    return 0;
}