# bst makefile

compile: bst.cpp mainBST.cpp
	g++ -o BST bst.cpp mainBST.cpp

run:
	./BST

memcheck:
	valgrind --leak-check=yes ./BST

clean:
	rm BST
