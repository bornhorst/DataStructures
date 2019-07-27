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
	void insertTree(int);
	void displayTree(void);
	void displayMin(void);
	void displayMax(void);
private:
	// data members
	Node* Root;

	// functions
	struct Node* newNode(int);
	struct Node* insert(struct Node*, int);
	void displayInOrder(struct Node*);
	int displayMin(struct Node*);
	int displayMax(struct Node*);
	void deleteTree(struct Node*);
};
