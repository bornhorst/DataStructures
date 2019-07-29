#include <cstdlib>
#include <cstddef>
#include <iostream>

using namespace std;

// node object
class Node {
public:
	int data;
	Node* left;
	Node* right;
};

// binary search tree class
class BSTree {
public:
	BSTree();
	~BSTree();
	void rootTree(int);
	struct Node* insertNode(int);
	void displayInOrder(void);
	void displayMin(void);
	void displayMax(void);
	struct Node* deleteNode(int);
private:
	// data members
	Node* Root;

	// functions
	struct Node* newNode(int);
	struct Node* insertNode(struct Node*, int);
	void displayInOrder(struct Node*);
	void displayMin(struct Node*);
	void displayMax(struct Node*);
	struct Node* deleteNode(struct Node*, int);
	void deleteTree(struct Node*);
};
