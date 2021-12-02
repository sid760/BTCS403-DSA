//Implementing Doubly Linked List, with a menu driven program
#include <iostream>
#include <process.h>
#include <math.h>
#include <iomanip>
using namespace std;

struct node {
	int data;
	node * lptr;
	node * rptr;
} *first = NULL, *last = NULL;

static int count = 0;				//counts the number of nodes in the linked list

void ins_first(int x) {				//inserts the a node at first position and returns that node
	struct node *newNode = new node;
	newNode->data = x;
	newNode->lptr = NULL;
	newNode->rptr = NULL;
	if(first != NULL) {
		newNode->rptr = first;
		first->lptr = newNode;
	}
	else last = newNode;
	first = newNode;
	count++;
}

void insert(int x) {				//inserts a node at last position
	node *newNode = new node;
	newNode->data = x;
	
	if(first == NULL) {
		newNode->lptr = NULL;
		newNode->rptr = NULL;
		first = last = newNode;
	}
	else {
		newNode->lptr = last;
		newNode->rptr = NULL;
		last->rptr = newNode;
		last = newNode;
	}
	count++;
}

int search(int value, int index) {		//index is the position where the search starts from 
	//First check if index entered is valid or not
	if((index > count) || (index < 1))	//Index value must be less than or equal to the size of list (i.e. <=count)						
		return -1; 
	else {
		int i = 1 ;
		if(i <= count) {
		node *temp = first;
			while (i < index) {
				temp = temp->rptr;
				i++;
			}
			while(i <= count) {	
				if(value == temp->data)
					return i;
				temp = temp->rptr;
				i++;
			}
		}
	}
	return -1;
}

void del(int index) {
	if(count == 0) {	//First check if list is empty
		cout << "List is already empty!" << endl;
	} 
	else if (index < 1)		//index must be valid
		cout << "Enter valid index!" << endl;
	else {		
		if(index > count) {			//check if index is less than the size of list
			cout << "Error! Index out of bound" << endl; 
		}
		else {			//if all well proceed for deletion
			if(index == 1) {
				(first->rptr)->lptr = NULL;
				first = first->rptr;
				//delete temp;
			}
			else if(index == count) {
				(last->lptr)->rptr = NULL;
				last = last->lptr;
			}
			else {
				node *temp = first;
				for (int i = 1; i < index; ++i)
				{
					temp = temp->rptr;
				}
				(temp->rptr)->lptr = temp->lptr;
				(temp->lptr)->rptr = temp->rptr;
			}	
			count--;
		}
	}
}

void display() {
	node *temp = first; char ch = 29;
	if(temp == NULL) 
		cout << "List is empty!" << endl;
	else {
		cout << "Items in the list are: ";
		while(temp != NULL) {
			cout << temp->data << " " << ch << " ";
			temp = temp->rptr;
		}
		cout << "NULL" << endl; 
	}
}

int main() {
	int choice, n; char ch = 26;
	MainMenu:
	cout << "Main Menu: " << endl;
	cout << "1. Insert " << endl;
	cout << "2. Insert at first position " << endl;
	cout << "3. Search " << endl;
	cout << "4. Delete " << endl;
	cout << "5. Display " << endl;
	cout << "6. Quit" << endl;
	cout << "7. Main Menu" << endl;
	do {
		cout << "\nNo. of items in the list = " << count << endl;
		cout << "-----------------------------";
		cout << endl << "Enter a choice >> " ;
		cin >> choice;
		switch(choice) {
			case 1: 
				cout << "Enter a value to insert: ";
				cin >> n;
				insert(n);
				cout << "Value inserted" << endl;
				break;
			case 2: 
				cout << "Enter a value to insert: ";
				cin >> n;
				ins_first(n);

				cout << "Value inserted at first position" << endl;
				break;
			case 3:
				cout << endl <<"Enter a value to search: ";
				cin >> n;
				int search_res;
				search_res = search(n, 1);		//storing the output of first search result 
				if(search_res != -1) {				//if search_res = -1 it means value was not found in the list
					cout << "Value found at ";
					//as long as search_res does not return -1, it loop runs but each time search function is initiated...
					//...with a higher index than previous one
					while(search_res != -1) {		
						cout <<"\n" << search_res ;	
						search_res = search(n, search_res+1);
					}
				}
				else
					cout << "No matching value in the linked list" << endl;				
				break;
			case 4:
				cout << "Enter a index to delete item at that position in the list: ";
				cin >> n;
				del(n);
				break;
			case 5:
				display();
				break;
			case 6: 
				exit(0);
				break;
			case 7:
				goto MainMenu;
				break;
			case 8: 
				node *temp = first;
				cout << temp->data << endl;
		}
	} while(1);
	cout << "End of program.";
	return 0;
}