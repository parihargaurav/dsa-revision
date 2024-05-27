// static variables are class variables.
// static variable hota ek hai par use sab share karte hai
// now we talk about passing object as function argument.

#include <iostream>
using namespace std;
class complex
{
    int a; // in class by default members are private
    int b;

public:
    void setData(int v1,  int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 2);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;

}