#include "stack.h"

int main() {

// top of stack node
Node* head = NULL;

class Stack stack;

// push values on the stack
stack.push(&head,1);
stack.push(&head,2);
stack.push(&head,3);

// pop the values off the stack
cout << "Top of stack is " << stack.peek(head) << endl;
stack.pop(&head);
cout << "Top after pop is " << stack.peek(head) << endl;
stack.pop(&head);
cout << "Top after pop is " << stack.peek(head) << endl;

return 0;

}

