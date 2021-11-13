//Program to implement queue (static)
#include <iostream>
#define size 5  //global size = 5
using namespace std;

int queue[size], front = -1, rear = -1; //queue data structure
//operations on queue: 1. insertion, 2. deletion
void enqueue(int val) {     //insertion in queue
  if(rear >= size - 1) {    //if rear index is greater than size of array..
    cout << "Queue is overflow!" << endl; //..queue is overflow
    return ;
  }
  queue[++rear] = val;    //increment the rear index and insert the value
  if(front == -1)         //if it is the first value being entered then increment.. 
    front++;              //..front as well
}

int dequeue() {           //deletion from queue
  if(front == -1) {       //check if queue is already empty
    cout << "Queue is underflow!" << endl;
    return -1;            //if queue empty function quits here
  }
  int item = queue[front];  //store the value to be deleted
  front++;                  //deletion increments the front
  if(front > rear)          //in case if its the deletion of last element..
    front = rear = -1;      //reset both front and rear
  return item;              //return the deleted item
}

void display() {
  cout << "Items in queue: ";
  if(front == -1)
    cout << "Queue is empty!";
  else {
    for(int i = front; i <= rear; i++)
      cout << queue[i] << "\t";
  }
  cout << endl;
}
int main()
{ //illustration:
  dequeue();      //Prints queue underflow

  enqueue(100);

  enqueue(200);
  display();

  enqueue(300);
  enqueue(400);
  enqueue(500);
  enqueue(600);   //Prints queue overflow
  dequeue();
  dequeue();
  display();
  return 0;
}