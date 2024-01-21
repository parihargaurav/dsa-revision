#include<iostream>
using namespace std;
int main()
{
    // pointer is a dataype which stores/holds the address of other datatypes
    int a =3;
    int*b = &a;  
    //here int  *b ek aisa varibale hai jo address of a store karta hai 
    // & -- (address of) operator
    // * -- dereference operator
     cout<<&a<<endl; // address of a
    // cout<<b and cout<<&a is same
    // now * is dereference operator which tells us the value ;
    cout<<*b<<endl;

    int **c = &b;
    cout<<*c<<endl;
    cout<<&b<<endl;
    cout<<**c;
    // aisa pointer jo pointer ke address ko store kare



    return 0;
}
