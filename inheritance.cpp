#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId) // constructor
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

// Inheritance is a process of inheriting attributes of the base class by a derived class. The syntax of the derived class is shown below.

/* // Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/



int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}


/*Note:

    Default visibility mode is private
    Public Visibility Mode: Public members of the base class becomes Public members of the derived class
    Private Visibility Mode: Public members of the base class become private members of the derived class
    Private members are never inherited
*/


/** working code
 * 
    1st we created an “employee” class which consists of public data member’s integer “id” and float “salary”.
    2nd the “employee” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “salary” is set to “34”.
    3rd the “employee” class also consists of default constructor.
    4th we created a “programmer” class that is inheriting “employee” class. The main thing to note here is that the “visibility-mode” is “public”.
    5th the “programmer” class consists of public data member’s integer “languageCode”.
    6th the “programmer” class consists of a parameterized constructor that takes an integer “inpid” parameter and assigns its value to the data member “id”. The value of variable “languageCode” is set to “9”.
    7th “programmer” class consists of a function “getData” which will print the value of the variable “id”.

*/