//Circular linked list 
//Program to insert node on the first position using a function
//Implementing circular linked list through class
#include <malloc.h>
#include <iostream>
using namespace std;

struct node {
    int info;
    node *link;
};
class CLL {         //Circular Linked List class, which includes operations on the CLL 
                    //such as node insertion, display nodes etc.
    node *FIRST, *LAST; //We can create multiple CLLs using multiple objects of this class
    public: 
    CLL() {
        FIRST = NULL;
        LAST = NULL;
    }
    node* insert(int x);
    void display_all();
};
node* CLL::insert(int x) {
    node *newNode = new node;
    newNode->info = x;
    if(FIRST == NULL) {
        newNode->link = newNode;
        FIRST = LAST = newNode;
    }
    else {
        newNode->link = FIRST;
        LAST->link = newNode;
        LAST = newNode;
    }
        
    return newNode;
}
void CLL::display_all() {
    node *temp = new node;	    //temp node to traverse the linked list
    temp = FIRST;	        //initialising temp with FIRST node
    while(temp!=LAST) {
        cout << temp->info << " --> ";
        temp = temp->link;      //temp now points to next node
    }
    cout << temp->info << endl; //printing last node
}

int main()
{   
    CLL c1; int val;
    CLL();
    node *n1, *n2, *n3;
    cout << "Enter a value: " << endl;
    cin >> val;
    n1 = c1.insert(val);    
   
    cout << "Enter a value: " << endl;
    cin >> val;
    n2 = c1.insert(val);
    
    cout << "Enter a value: " << endl;
    cin >> val;
    n3 = c1.insert(val);
    
    cout << endl << "Items in the circular linked list: ";
    c1.display_all();
  
    return 0;
}