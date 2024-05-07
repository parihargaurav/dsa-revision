#include <iostream>
#include <vector>

using namespace std;
// vector writing formula = vector<typeof vector like int , float, char> vector name
// vector is a type of data structure which is not static in size as it's memory allocation is dynamic

//  VECTOR IS A RESIZABLE ARRAY.


void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element;
    int size;
    cout<< "Enter the size of vector"<<endl;
    cin>>size; // 2

    for (int i = 0; i <size; i++)
    {
        cout << "Enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1); // 5 4
    // iterator function
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1, 15);
    display(vec1);// 5 15 4
    return 0;
} 

// push_back is a method in vector