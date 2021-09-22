//Turbo C++ Compiler
//Program to implement linked list, and insert nodes using a function
#include<iostream.h>
#include<malloc.h>

struct node {		//linked list template
	int data;
	node* link;
} *first, *last;

node* node_insertion(int i) {		//function to insert nodes in the linked list
	node* temp = new node;
	cout << "Enter value in the node " << i << " > ";
	cin >> temp -> data;
	temp -> link = NULL;
	return temp;
	}
	
void main() {
	//creating nodes 1 and 2 normally without insertion function
	node* n1 = new node; // Node 1 
	first = n1;
	cout << "Enter value in node 1 > ";
	cin >> n1 -> data;	
	n1 -> link = NULL;
	
	node *n2 = new node; //Node 2
	n1->link = n2;
	cout << "Enter value in node 2 > ";
	cin >> n2->data;
	n2->link = NULL;
	
	//now creating nodes 3 and 4 using insertion function
	node *n3,*n4;
	
	n3 = node_insertion(3); //Node 3
	n2->link = n3;
	
	n4 = node_insertion(4); //Node 4
	n3->link = n4;
	
	cout << endl;
	node* temp = first;
	while(temp != NULL) {
		cout <<  temp -> data << " --> ";
		temp=temp->link;
	}
	cout << "NULL" << endl;
}
	