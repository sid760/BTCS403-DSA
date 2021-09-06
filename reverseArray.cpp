//Program coded in Borland Turbo C++ compiler V3.00
//Program to input 10 elements in an array and print in reverse order
#include <iostream.h>
#include <conio.h>

int main()
{	clrscr();
	int arr[10];
	cout << "Enter 10 elements in the array: \n";
	for(int i = 0; i < 10; i++)
		cin >> arr[i];
	cout << "Array in the reverse order is: "<< endl;
	for(int i = 0; i < 10; i++)
		cout << arr[9 - i] << endl;
	getch();
	return 0;
} 