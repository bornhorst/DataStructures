
#include <stdio.h>
#include <stdlib.h>

// node structure
struct Node {
	int data;
	struct Node* next;
};

// function prototypes
struct Node* startList(int);
void appendList(struct Node*, int);
struct Node* deleteItem(struct Node*, int);
void printList(struct Node*);
void freeList(struct Node*);
struct Node* deleteDuplicate(struct Node*);


