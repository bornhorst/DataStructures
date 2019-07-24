#include <string.h>
#include "simpleList.h"

#define BUFFSIZE 100

int main(void) {

// create a head node
struct Node* head = NULL;

// selection criteria
int selection = 0;

// input buffer
char buffer[BUFFSIZE];
char command[BUFFSIZE];
int data = 0;

while(1) {
	selection = 0;
	fgets(buffer, BUFFSIZE, stdin);
	sscanf(buffer, "%s %d", command, &data); 

	if(strcmp(command,"append") == 0)
		selection = 1;
	else if(strcmp(command,"delete") == 0)
		selection = 2;
	else if(strcmp(command,"display") == 0)
		selection = 3;
	else if(strcmp(command,"duplicates") == 0)
		selection = 4;
	else if(strcmp(command,"exit") == 0)
		selection = 5;
	else
		printf("Invalid Command\n");

	switch(selection) {
		case 1: appendList(&head, data); break;
		case 2: deleteItem(&head, data); break;
		case 3: printList(head); break;
		case 4: deleteDuplicate(&head); break;
		case 5: freeList(head); return 0;
		default: break;
	};
};

return 0;

};
