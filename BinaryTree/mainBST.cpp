#include "bst.h"

/*
Binary Search Tree
*/

int main() {

// binary search tree class
class BSTree bst;

// create tree
bst.rootTree(50);
bst.insertTree(10);
bst.insertTree(30);
bst.insertTree(20);
bst.insertTree(40);
bst.insertTree(70);
bst.insertTree(60);
bst.insertTree(80);

// display the tree
bst.displayTree();

return 0;

};
