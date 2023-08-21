#include <bits/stdc++.h>
using namespace std;

class Super {
public:
    virtual void print() {
        cout << "Super" << endl;
    }
};


class Sub : public Super {
public:
    void print() {
        cout << "Sub" << endl;
    }
};

int main()
{
    // Super *s1 = new Super();
    // s1 -> print();

    // Sub *s2 = new Sub();
    // s2 -> print();

    Super *s3 = new Sub();
    s3 -> print();

    return 0;
}