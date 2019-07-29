#include "bst.h"

/* 
BST class functions
*/

// constructor
BSTree::BSTree() {
	// initialize root
	Root = NULL;
};

// root the tree
void BSTree::rootTree(int item) {
	Root = insertNode(Root, item);
};

// overloaded insert function
struct Node* BSTree::insertNode(int item) {
	insertNode(Root, item);
};

// overloaded display function
void BSTree::displayInOrder(void) {
	displayInOrder(Root);
};

// overloaded display min function
void BSTree::displayMin() {
	displayMin(Root);
};

// overloaded display max function
void BSTree::displayMax() {
	displayMax(Root);
};

// create a new node
struct Node* BSTree::newNode(int item) {
	// create a new node
	struct Node* bstNode = new Node();
	// store data in the node
	bstNode->data = item;
	// nothing is attached further down yet
	bstNode->left = bstNode->right = NULL;
	return bstNode;
};

// insert a node into the tree
struct Node* BSTree::insertNode(struct Node* node, int item) {
	// check if the node is empty
	// if it is then create one
	if(!node)
		return newNode(item);

	// otherwise insert the node into the tree
	if(item < node->data)
		node->left = insertNode(node->left, item);
	else if(item > node->data)
		node->right = insertNode(node->right, item);

	return node;

};

// display contents of tree in order
void BSTree::displayInOrder(struct Node* root) {
	// check for empty tree
	// if not empty then display the tree data in order
	if(root) {
		displayInOrder(root->left);
		cout << root->data << endl;
		displayInOrder(root->right);
	};
};

// display the minimum
void BSTree::displayMin(struct Node* root) {
	if(root->left) 
		displayMin(root->left);
	else
		cout << root->data << endl;		
};

// display the maximum
void BSTree::displayMax(struct Node* root) {
	if(root->right)
		displayMax(root->right);
	else
		cout << root->data << endl;
}; 

// destroy the tree
void BSTree::deleteTree(struct Node* node) {
	if(node) {
		deleteTree(node->left);
		deleteTree(node->right);
		delete(node);
	};
};

// destructor
BSTree::~BSTree() {
	// clear out the tree
	deleteTree(Root);
};

