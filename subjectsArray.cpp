#include <iostream>
using namespace std;

int main()
{   int n;
    cout << "Enter the no. of subjects in your current semester: " << endl;
    cin >> n;
    string subjects[n];
    cout << "Enter " << n << " subjects: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> subjects[i];
    }
    cout << "Your subjects are: " << endl;
    for(int i = 0; i < n; i++) {
        cout << subjects[i] << endl;
    }

    return 0;
}