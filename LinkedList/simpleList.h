
#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node {
	int data;
	struct Node* next;
};

// function prototypes
void appendList(struct Node**, int);
void deleteItem(struct Node**, int);
void printList(struct Node*);
void freeList(struct Node*);
void deleteDuplicate(struct Node**);


