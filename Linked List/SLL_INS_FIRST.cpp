//Program to insert an element in an existing linked list at the beginning

#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
} *first = NULL;

node* ins_first(int x) {
	struct node *newNode;
	newNode->data = x;
	newNode->next = NULL;
	if(first != NULL)
		newNode->next = first;
	first = newNode;
	return newNode;
}

void display() {
	node *temp = first;
	char ch = 26;	//for showing arrow symbol
	while(temp != NULL) {
		cout << temp->data << " " << ch << " " ;
		temp =  temp-> next;
	}
	cout << "NULL" << endl;
}

int main() {
	int n;
	node *n1, *n2, *n3;		//Creating a linked list that contains 3 nodes initially
	n1 = new node;
	cout << "Enter a value: ";
	cin >> n;
	n1->data = n;
	first = n1;

	n2 = new node;
	cout << "Enter a value: ";
	cin >> n;
	n2->data = n;
	n1->next = n2;

	n3 = new node;
	cout << "Enter a value: ";
	cin >> n;
	n3->data = n;
	n3->next = NULL;
	n2->next = n3;
	
	cout << "Linked list before insertion : \n" << endl;
	display();

	//Now inserting the a new node in the existing linked list
	cout << "\nEnter a value: ";
	cin >> n;
	node *new1;
	new1 = ins_first(n);
	cout << "Linked list after insertion : \n" << endl;
	display();
}