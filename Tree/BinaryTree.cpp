#include <iostream>
using namespace std;

struct bnode {
    int data;
    bnode* left, *right;
};

bnode* insert(int val) {
    bnode* newNode = (bnode*)malloc(sizeof(bnode));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void inorderTraversal(bnode* node) {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << "\t";
  inorderTraversal(node->right);
}

int main() {
	bnode *root = (bnode*)malloc(sizeof(bnode));
	
	//Insertion into tree:
	root = insert(10);
	root->right = insert(20);
	root->left = insert(30);
	root->left->left = insert(5);
	root->left->right = insert(25);
	
	cout << "Inorder Sequence: " << endl;
	inorderTraversal(root);
	return 0;
}
