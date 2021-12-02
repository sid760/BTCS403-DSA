//Program to implement doubly linked list
//Program to insert a node at a specific position of doubly linked list

#include <iostream.h>
#include <conio.h>

struct node {
	int data;
	node * lptr;
	node * rptr;
} *FIRST = NULL, *LAST = NULL;

node * insert(int x, int pos) {
	node * newNode;
	newNode = new node;
	newNode -> data = x;
	newNode -> lptr = NULL;
	newNode -> rptr = NULL;
	
	if(pos == 1) {
		newNode -> rptr = FIRST;
		FIRST -> lptr = newNode;
		FIRST = newNode;
	}
	else {
		node *temp = FIRST;
		for(int i = 1; i < pos - 1; i++) {
			temp = temp -> rptr;
		}
		
		if(temp != NULL) {
			newNode -> lptr = temp;
			newNode -> rptr = temp -> rptr;
			temp -> rptr = newNode;
			temp -> rptr -> lptr = newNode;
		}
		return newNode;
	}
}
void display() {
	node *temp = FIRST;
	while(temp != NULL) {
		cout << temp -> data << endl;
		temp = temp -> rptr;
	}
}
int main() {
	int p, data;
	node *n1, *n2, *n3;
	n1 = new node;		//node 1
	n1 -> data = 10;
	n1 -> lptr = NULL;
	FIRST = n1;
	
	n2 = new node;
	n2 -> data = 20;
	n1->rptr = n2;
	n2 ->lptr = n1;
	
	n3 = new node;
	n3 -> data = 30;
	n2 -> rptr = n3;
	n3 -> lptr = n2;
	n3 -> rptr = NULL;
	LAST = n3;
	display();
	cout << "Where do you want to insert a new value ? " << endl;
	cin >> p ;
	cout << "Enter the value to insert : " ;
	cin >> data;
	node *n4 = insert(data, p);
	cout << "After insertion " << endl;
	display();
	return 0;
}