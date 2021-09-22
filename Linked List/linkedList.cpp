//WAP to create a linked list with five elements and display it
#include<iostream.h>
#include<malloc.h>

struct node {
        int data;
        node* link;
} *first;

void main() {
	node *n1, *n2, *n3, *n4, *n5; 
									//Node1
	n1 = (node*)malloc(sizeof(node));
	cout << "Enter data in the node > ";
	cin >> n1 -> data;
	n1 -> link = NULL;
	first = n1;	
	
	n2 = (node*)malloc(sizeof(node));			//Node2
	cout << "Enter data in the node > ";
	cin >> n2 -> data;
	n2 -> link = NULL;
	n1 -> link = n2;
	
	n3 = (node*)malloc(sizeof(node));			//Node3
	cout << "Enter data in the node > ";
	cin >> n3 -> data;
	n3 -> link = NULL;
	n2 -> link = n3;
	
	n4 = (node*)malloc(sizeof(node));			//Node4
	cout << "Enter data in the node > ";
	cin >> n4 -> data;
	n4 -> link = NULL;
	n3 -> link = n4;
	
	n5 = (node*)malloc(sizeof(node));			//Node5
	cout << "Enter data in the node > ";
	cin >> n5 -> data;
	n5 -> link = NULL;
	n4 -> link = n5;
	
	node * temp = first;
    while(temp!=NULL) {							//Display linked list
		cout << temp->data << "-->";
		temp=temp->link;
	}
	cout << "NULL" << endl ;
}
