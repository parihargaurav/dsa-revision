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
    void getData()// print data
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
    // “setData” function is used to assign values to the private member of the class
};
// private ko usi class ka function hi access kar sakhta hai.. aise public ki tarah access nahi hota
void Employee ::setData(int a1, int b1, int c1) // :: scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
};
int main(){
Employee gaurav;  // employee gaurav object
gaurav.d = 90;
gaurav.e = 9877655;
gaurav.setData(45,555,666);
gaurav.getData();

return 0;
};


// typedef is used to change the datatype of any datatype

// difference between structure and classess:-
// in structure we can't do data hiding while in classess we can do data hiding 