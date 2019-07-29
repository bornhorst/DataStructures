#include "bst.h"

/*
Binary Search Tree
*/

int main() {

// binary search tree class
class BSTree bst;

// create tree
bst.rootTree(50);
bst.insertNode(10);
bst.insertNode(30);
bst.insertNode(20);
bst.insertNode(40);
bst.insertNode(70);
bst.insertNode(60);
bst.insertNode(80);

// display the tree
bst.displayInOrder();

// display the min
bst.displayMin();

// display the max
bst.displayMax();

// delete some nodes
bst.deleteNode(50);
bst.deleteNode(20);
bst.deleteNode(70);
bst.displayInOrder();

return 0;

};
