// factorial nikalna hai

#include <iostream>
using namespace std;

// fibonaaci number

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

// factorial

int factorial(int n)
{
    if (n <= 1)
    {
        return 1; // base condition
    }

    return n * factorial(n - 1);
}

int main()
{
    int a;
    cin >> a;
    cout << factorial(a)<<endl;
    cout<< fib(a);
    return 0;
}
