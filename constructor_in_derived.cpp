/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/


/* In case 1, class “B” is inheriting class “A”, so the order of execution will be that first the constructor of class “A” will be executed and then the constructor of class “B” will be executed.
In case 2, class “A” is inheriting two classes “B” and “C”, so the order of execution will be that first constructor of class “B” will be executed and then the constructor of class “C” will be executed and at the end constructor of class “A” will be executed.
In case 3, class “A” is inheriting two classes “B” and virtual class “C”, so the order of execution will be that first constructor of class “C” will be executed because it is a virtual class and it is given more preference and then the constructor of class “B” will be executed and at the end constructor of class “A” will be executed.*/


#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
        Base2(int i){
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
        {
            derived1 = c;
            derived2 = d;
            cout<< "Derived class constructor called"<<endl;
        }
        void printDataDerived(void)
        {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};


/*
    We have created a “Base1” class which consists of private data member “data1” and parameterized constructor which takes only one argument and set the value of data member “data1”. The “Base1” class also contains the member function “printDataBase1” which will print the value of data member “data1”.
    We have created a “Base2” class which consists of private data member “data2” and parameterized constructor which takes only one argument and set the value of data member “data2”. The “Base2” class also contains the member function “printDataBase2” which will print the value of data member “data2”.
    We have created a “Derived” class that is inheriting base classes “Base1” and “Base2”. The “Derived” class consists of private data members “derived1” and “derived2”. The “Derived” class contains parameterized constructor which calls the “Base1” and “Base2” class constructors to pass the values, it also assigns the values to the data members “derived1” and “derived2”. The “Derived” class also contains member functions “printDataDerived”. The function “printDataDerived” will print the values of the data member “derived1” and “derived2”.

The main thing to note here is that the constructors will be executed in the order in which the classes are being inherited. As in the example program above the “Base2” class is being inherited first and then “Base1” class is being inherited, so the constructor of “Base2” class will be executed first*/


int main(){
    Derived harry(1, 2, 3, 4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();
    return 0;
}

/*
    Object “harry” is created of the “Derived” data type and the values (1, 2, 3, 4) are passed.
    The function “printDataBase1” is called by the object “harry”.
    The function “printDataBase2” is called by the object “harry”.
    The function “printDataDerived” is called by the object “harry”.
*/