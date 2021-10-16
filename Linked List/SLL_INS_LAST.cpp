//Turbo C++ Compiler
//Program to implement linked list, and insert node at last using a function

#include<iostream.h>
#include<malloc.h>

struct node {		//linked list template
	int data;
	node* link;
} *first = NULL, *last = NULL;

node* push(int x) {		//function to insert nodes in the linked list and link them as well
	node *newNode = new node;
	newNode->data = x;
	newNode->link = NULL;
	if(first == NULL)
		first = last = newNode;
	else {
		last->link = newNode;
		last = newNode;
	}
	return newNode;
}
	
void main() {
	node *n1, *n2, *n3, *n4;
	n1 = push(100);
	n2 = push(150);
	n3 = push(200);
	n4 = push(250);


	//Displaying the linked list values:
	node *temp = first;
	while(temp != NULL) {
		cout <<  temp->data << " --> ";
		temp=temp->link;
	}
	cout << "NULL" << endl;
}
	