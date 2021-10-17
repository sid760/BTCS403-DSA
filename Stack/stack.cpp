#include <iostream>	
#define size 5
using namespace std;

int stack[size];		//Stack
int top = -1;			//Stack pointer
	void push(int x) {		//Method to insert item in stack
		if(top >= size-1)
			cout << "Stack overflow!" << endl;
		else {
			top++;
			stack[top] = x;
			}
	}
	int pop() {				//Method to delete an item from the stack
		if(top == -1) {
			cout << "Stack underflow" << endl;
			return -1;
		}
		else {
			int i = stack[top];
			top--;
		return i;
		}
	}
	void display() {		//Displays items in the stack
		if(top == -1) 
			cout << "\nStack underflow" << endl;
		else {
			cout << "\nItems in the stack:\t";
			for(int i = 0; i <= top; i++)
				cout << stack[i] << "\t";
			cout << endl;
		}
	}	

int main() {
	int x;
	cout << "\nPushing an element" << endl;
	cout << "Enter an element" << endl;
	cin >> x;
	push(x);
	cout << "\nPushing an element" << endl;
	cout << "Enter an element" << endl;
	cin >> x;
	push(x);
	display();
	cout << "\nPopping an element" << endl;
	if(top != -1)
		cout << "Element popped = " << pop();
	else pop();
	display();

	return 0;
}