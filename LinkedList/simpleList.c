#include "simpleList.h"

// function that removes all duplicates from a list
void deleteDuplicate(struct Node** head) {

struct Node* current = NULL;
struct Node* temp = *head;
int count = 0;

if(!(*head))
	return;

while(1) {
	count = 0;
	current = temp->next;

	if(!temp->next)
		return;
 
	while(current) {
		if(current->data == temp->data) 
			++count;
		current = current->next;
	};

	if(count > 0) {
		for(int i = 0; i < count; i++) 
			deleteItem(head, temp->data);
		temp = *head;
	} else
		temp = temp->next;
};

};

// function for deleting specific value from list
void deleteItem(struct Node** head, int value) {

struct Node* current = *head;
struct Node* temp = NULL;

if(!(*head))
	return;

if((*head)->data == value) {
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return;
} else {
	while(current->next) {
		if(current->next->data == value) {
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return;
		};
		current = current->next;
	};
}; 
		
};

// function for adding to list
void appendList(struct Node** head, int value) {

struct Node* current = *head;
struct Node* newNode = malloc(sizeof(struct Node));

if(!*head) {
	newNode->data = value;
	newNode->next = *head;
	*head = newNode;
	return;
};

while(current->next) 
	current = current->next;

current->next = newNode;
current->next->data = value;
current->next->next = NULL;

return;

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

