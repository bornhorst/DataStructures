#include <string.h>

#include "simpleList.h"

// function that removes all duplicates from a list
void deleteDuplicate(struct Node** head) {

struct Node* current = NULL;
struct Node* temp = (*head);

int dupVal = 0;
int count = 0;
int downCount = 0;

if(!(*head))
	return;

while(1) {
	if(!temp->next)
		return;

	count = 0;
	current = temp->next;
 
	while(current) {
		if(current->data == temp->data) 
			++count;
		current = current->next;
	};
	
	dupVal = temp->data;
	downCount = count;

	while(downCount > 0) {
		deleteItem(head, dupVal);
		--downCount;
	}

	if(count > 0)
		temp = (*head);
	else
		temp = temp->next;

};

};

// function for deleting specific value from list
void deleteItem(struct Node** head, int value) {

struct Node* current = (*head);
struct Node* temp = NULL;

if(!(*head))
	return;

if((*head)->data == value) {
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
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

struct Node* current = (*head);
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

if(!(*head)) {
	newNode->data = value;
	newNode->next = (*head);
	(*head) = newNode;
	return;
};

while(current->next) 
	current = current->next;

newNode->data = value;
current->next = newNode;
newNode->next = NULL;

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

