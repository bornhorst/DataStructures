
#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node {
	int data;
	struct Node* next;
};

struct Node* startList(int value) {

struct Node* head = (struct Node*)malloc(sizeof(struct Node));
head->data = value;
head->next = NULL;
return head;

}

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

void printList(struct Node* head) {

struct Node* current = head;

while(current) {
	printf("DATA: %d\n", current->data);
	current = current->next;
};

};

void freeList(struct Node* head) {

struct Node* temp;

while(head) {
	temp = head;
	head = head->next;
	free(temp);
};

};

int main(void) {

// create a head pointer and a current data pointer
struct Node* head = NULL;

// build simple list
head = startList(1);
appendList(head, 2);
appendList(head, 3);

printList(head);

freeList(head);

return 0;

};
