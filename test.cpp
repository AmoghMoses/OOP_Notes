#include <bits/stdc++.h>
using namespace std;

class Base {
    int x, y;

public: 
    // Base() {
    //     x = 0;
    //     y = 0;
    // }

    void display()
    {
        cout << x << " " << y << endl;
    }
};

int main()
{
    Base b;
    b.display();

    return 0;
}