#include <cstdlib>
#include <cstddef>
#include <iostream>

using namespace std;

// node class for list
class Node {
public:
	int data;
	Node* next;
};

// stack class
class Stack {
public:
	Node* newNode(int data);
	int isEmpty(Node* head);
	void push(Node** head, int data);
	int pop(Node** head);
	int peek(Node* head);
};
