#include <iostream>
using namespace std;
class Employee
{
private:
    int a, b, c;
    // here the private access modifier in it all variable and functions are not accessible outside class.
public:
    int d, e;
    // they are accessible outside the class also
    void setData(int a, int b, int c); // Declaration
    void getData()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
    // “setData” function is used to assign values to the private member of the class
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};
int main(){
Employee gaurav;
gaurav.d = 90;
gaurav.e = 9877655;
gaurav.setData(45,555,666);
gaurav.getData();

return 0;
};