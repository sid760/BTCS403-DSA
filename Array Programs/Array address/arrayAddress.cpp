//Program coded for C++14 MinGW compiler
//Program to input data in an array, display them and also display array address in memory
#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    int i;
    for(i = 0; i < 5; i++)
    {
        cout << "Enter the element a[" << i << "]" << endl;
        cin >> arr1[i];
    }
    cout << "Entered elements are: " << endl;
    for ( i = 0; i < 5; i++)
    {
        cout << arr1[i] << " @ " << &arr1[i] << endl;
    }
    return 0;
}
