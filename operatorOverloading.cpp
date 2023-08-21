#include <bits/stdc++.h>
using namespace std;

class Test {
private:
    string X;
    string Y;

public:
    Test(string X, string Y) {
        this->X = X;
        this->Y = Y;
    }

    void print() {
        cout << "X = " << X << endl;
        cout << "Y = " << Y << endl;
    }

    // Overloading the + operator
    Test operator+(Test const &obj) {
        Test res("", "");
        res.X = this->X + obj.X;
        res.Y = this->Y + obj.Y;
        return res;
    }

    // Overloading the == operator
    bool operator==(Test const &obj) {
        if (this->X == obj.X && this->Y == obj.Y) {
            return true;
        }
        return false;
    }

    // Overloading the << operator
    friend ostream &operator<<(ostream &output, const Test &obj) {
        output << "X = " << obj.X << endl;
        output << "Y = " << obj.Y << endl;
        return output;
    }

    // Overloading the >> operator
    friend istream &operator>>(istream &input, Test &obj) {
        input >> obj.X >> obj.Y;
        return input;
    }


};

int main()
{
    

    return 0;
}