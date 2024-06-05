//  Ambiguity Resolution in Inheritance


/*Ambiguity in inheritance can be defined as when one class is derived for two or more base classes then there are chances that the base classes have functions with the same name.
 So it will confuse derived class to choose from similar name functions. 
 To solve this ambiguity scope resolution operator is used “::”.
  An example program is shown below to demonstrate the concept of ambiguity resolution in inheritance.
*/ 

#include <iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2{
    public:
        void greet()
        {
            cout << "Kaise ho?" << endl;
        }
};


class Derived : public Base1, public Base2{
   int a;
   public:
    void greet(){
        Base2 :: greet();
    }
};

/*
    We have created a “Base1” class which consists of public member function “greet”. The function “greet” will print “how are you?”
    We have created a “Base2” class which consists of public member function “greet”. The function “greet” will print “kaise ho?”
    We have created a “Derived” class which is inheriting “Base1” and “Base2” classes. The “Derived” class consists of public member function “greet”. The function “greet” will run the “greet” function of the “Base2” class because we have used a scope resolution operator to let the compiler know which function should it run otherwise it will cause ambiguity.
*/

int main(){
  // Ambibuity 1
     Base1 base1obj;
     Base2 base2obj;
     base1obj.greet();
     base2obj.greet();
     Derived d;
     d.greet();

    return 0;
}


/*
    Object “base1obj” is created of the “Base1” data type.
    Object “base3obj” is created of the “Base2” data type.
    The function “greet” is called by the object “base1obj”.
    The function “greet” is called by the object “base2obj”.
    Object “d” is created of the “Derived” data type.
    The function “greet” is called by the object “d”.

The main thing to note here is that when the function “greet” is called by the object “d” it will run the “greet” function of the “Base2” class because we had specified it using scope resolution operator “::” to get rid ambiguity.*/


