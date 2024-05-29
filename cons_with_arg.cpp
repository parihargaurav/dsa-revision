// Constructors With Default Arguments

/*Default arguments of the constructor are those which are provided in the constructor declaration.
If the values are not provided when calling the constructor the constructor uses the default arguments automatically. */

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8) // Constructor with default arguments
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData(); // Member function declaration
};

// Definition of member function using scope resolution operator
void Simple::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(12, 13); // Creating an object of Simple with arguments 12 and 13
    s.printData();    // Calling the member function to print data
    return 0;
}


/*the scope resolution operator :: is used to define the implementation of a member function outside the class definition. 
It helps specify which class the member function belongs to, particularly useful when the function definition is separated from the class declaration.

In your example, the printData function is declared inside the class Simple, but it is defined outside the class.
 The scope resolution operator :: is used to indicate that the printData function belongs to the Simple class. */