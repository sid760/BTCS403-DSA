#include <iostream>	
#include <process.h>
#define size 5
using namespace std;

class stack {
	int s[size];		// array s can store max. 5 items of type int in the stack
	int top;			// top points to the last item pushed into the stack
public:
	stack() {
		top = -1; 		//Initialise top with -1 indicating stack is empty
	}
	void push(int);
	int pop();
	void display();
	int check();
};

	void stack::push(int item) {		//method to push an element in the stack object
			s[++top] = item;			//First increment the value of top and then insert the item						
	}
	int stack::pop() {					//method to pop an element from the stack object
			int item = s[top--];
			return item;				//Returns popped item
	}
	void stack::display() {		
			if(top == -1) cout << "No items to display, stack empty!";
			else {
				cout << endl << "Items in the stack: " ;
				for (int i = top; i >= 0; i--) {
					cout << "\t" << s[i];
				}
			}
			cout << endl;
	}
	int stack::check() {		//Method to check if stack is empty or full
		if(top == -1) {
			cout << endl << "Stack underflow! " << endl;
			return -1;			//returns -1 if stack underflow
		}
		else if(top >= size-1) {
			cout << endl << "Stack overflow! " << endl;
			return 1;			// returns 1 if stack overflow
		}
		else 
			return 0;			// returns 0 otherwise
	}

int main()
{
	
	stack s1;					//object of stack type
	int choice, val, n, i;
	MainMenu:					//Label named MainMenu, for the 'goto' keyword
	cout << "\n\nMain menu";
	cout << endl << "1.Push";
	cout << endl << "2.Multiple Push";
	cout << endl << "3.Pop";
	cout << endl << "4.Multiple pop";
	cout << endl << "5.Display";
	cout << endl << "6.Quit";

	do {	
		cout << endl << "Enter you choice (Enter 7 for the Main Menu) >> ";
		cin >> choice;

		switch(choice) {
			case 1:
				if(s1.check() == 1)					
					break;
				else {
					cout << endl << "Enter the value to be pushed: ";
					cin >> val;
					s1.push(val);
				}
				break;
			case 2: 
				cout << endl << "How many elements do you want to push ? ";
				cin >> n;
				while(n--) {			//Loop n times
					if(s1.check() == 1)						
						break;			//if stack gets full then break		
					else {
						cout << endl << "Enter the value to be pushed: ";
						cin >> val;
						s1.push(val);
					}	
				}
				break;
			case 3:
				if(s1.check() == -1)					
					break;				
				else {
					i = s1.pop();
					cout << "Item popped is: " << i;
				}
				break;
			case 4:
				cout << endl << "How many elements do you want to pop ? ";
				cin >> n;
				while(n--) {					
					if(s1.check() == -1)			
						break;
					else {
						i = s1.pop();
						cout << "Item popped is: " << i << endl;
					}
				}
				break;
			case 5:
				s1.display();
				break;
			case 7: 
				goto MainMenu;		//goes back to the MainMenu label
				break;
			default: 
				exit(0);			//terminates the program successfully
				break; 
		}

	} while(1);			//Value is always true, exit() used to exit the the loop
	return 0;
}