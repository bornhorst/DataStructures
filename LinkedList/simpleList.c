#include "simpleList.h"

// function for initializing a new list
struct Node* startList(int value) {

struct Node* head = (struct Node*)malloc(sizeof(struct Node));
head->data = value;
head->next = NULL;
return head;

}

// function that removes all duplicates from a list
struct Node* deleteDuplicate(struct Node* head) {

struct Node* current = head;
struct Node* value = head;

if(!head)
	return head;
else {
	while(1) {
		while(current->next) {
			current = current->next;
			if(value->data == current->data)
				head = deleteItem(head, current->data);
		};	
		if(value->next) {
			value = value->next;
			current = value;
		} else
			return head;
	};
};

};

// function for deleting specific value from list
struct Node* deleteItem(struct Node* head, int value) {

struct Node* current = head;
struct Node* previous = head;

if(!head)
	return head;
else if(head->data == value) 
	return head->next;
else {
	while(current) {
		if(current->data == value) {
			previous->next = current->next;
			return head;
		};
		previous = current;
		current = current->next;
	};
};

};

// function for appending to a list
void appendList(struct Node* head, int value) {

if(!head) 
	return;
else {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	struct Node* current = head;

	while(current) {
		if(!current->next) {
			current->next = newNode;
			current = current->next;
			current->next = NULL;
			return;
		};
		current = current->next;
	};
};

};

// function for displaying the list
void printList(struct Node* head) {

struct Node* current = head;

while(current) {
	printf("DATA: %d\n", current->data);
	current = current->next;
};

};

// function for freeing list memory
void freeList(struct Node* head) {

struct Node* temp;

while(head) {
	temp = head;
	head = head->next;
	free(temp);
};

};

