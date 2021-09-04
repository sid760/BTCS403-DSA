#include <iostream>
#include <string>
using namespace std;

int main()
{   int n;
    cout << "Enter the no. of subjects in your current semester: " << endl;
    cin >> n;
    string subjects[n];
    cout << "Enter " << n << " subjects: " << endl;
    cin.ignore();
    for(int i = 0; i < n; ++i)
        getline(cin, subjects[i]);
    cout << "\nYour subjects are:\n " << endl;
    for(int i = 0; i < n; i++)
        cout << subjects[i] << endl;
        
    return 0;
}