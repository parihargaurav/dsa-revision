// in class we can have multiple constructor as constructor overloading.

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()  // default as no paramters
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)    // patameters as it defined
    {
        a = x;
        b = y;
    }

    Complex(int x)  // patameters as it defined
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
