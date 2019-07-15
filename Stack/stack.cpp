#include "stack.h"

// stack class functions

// function to create new stack node
Node* Stack::newNode(int data) {
	// initialize a new node that can be pushed on stack
	Node* stackNode = new Node();
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
};

// function to check if stack is empty
int Stack::isEmpty(Node* head) {
	return !head;
};

// function to push data onto the stack
void Stack::push(Node** head, int data) {
	// create the new node
	Node* stackNode = newNode(data);
	// add node to top of stack
	stackNode->next = *head;
	// point head back to the top
	*head = stackNode;
	cout << data << " was pushed on stack\n";
};

// function to pop data off the stack
int Stack::pop(Node** head) {
	if(isEmpty(*head))
		return 0;
	// point to the top node
	Node* temp = *head;
	// move head down one node
	*head = (*head)->next;
	// save the data for peeking
	int itemPopped = temp->data;
	// free the popped nodes memory from the top
	free(temp);
	return itemPopped;
};

// function to look at the top of the stacks data
int Stack::peek(Node* head) {
	if(isEmpty(head))
		return 0;
	// look at head's data
	return head->data;
};



