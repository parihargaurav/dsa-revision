// Parametrized and Default constructor
//  in para- it takes parameters as  the values and  after it will give output .
//  but in default constructor it automatically invoked.

// example of parametrized constructor

#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b) // parameterized  constructor with initialization of a and b.
    {
        x = a;
        y = b;
    }

    void displayPoint() // showcase display
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();
    return 0;
}
