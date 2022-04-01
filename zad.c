#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	char data;
	struct Node* left, *right;
}Node;

Node* createNode(char data){
	Node* newNode;
	if(newNode = (Node*)malloc(sizeof(Node)) == NULL)
	{
		printf("Error on malloc\n");
		exit(-1);
	}
	newNode->data = daa;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}
