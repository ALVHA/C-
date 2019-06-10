#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1001

struct Node{
	int data;
	struct Node* leftChild;
	struct Node* rightChild;
};

Node* insertNode(Node* root, int data)
{
	if(root==NULL)
	{
		root = (Node*)malloc(sizeof(Node));
		root->leftChild = root->rightChild =NULL;
		root->data = data;
		return root;
	}
	else
	{
		if(root->data > data)
		{
			root->leftChild = insertNode(root->leftChild, data);
		}
		else
		{
			root->rightChild = insetNode(root->rightChild, data);
		}
	}
	return root;
}

Node* searchNode(Node* node, int data)
{
	if (root == NULL) return NULL;
	if (root -> data == data) return root;
	else if (root -> data > data) return searchNode(root->leftChild,data);
	else return searchNode(root->rightChild, data);
}

void preOrder(Node* root)
{
	if (root==NULL) return;
	printf("%d", root->data);
	preOredr(root->leftChild);
	preOrder(root->rightChild);
}

Node* findMinNode(Node* root)
{
	Node* node = root;
	while(node->leftChild != NULL)
	{
		node = node->leftChild;
	}
	return node;
}

Node* deleteNode(Node* root, int data)
{
	Node* node = NULL;
	if (root == NULL) return NULL;
	if (root->data > data) root->leftChild = deleteNode(root->leftChild, data);
	else if(root->data < data) root->rightChild = deleteNode(root->rightChild, data);
	else
	{
		if (root->leftChild != NULL && root->rightChild !=NULL)
		{
			node = findMinNode(root->rightChild);
			root->data = node->data;
			root->rightChild = deleteNode(root->rightChild, node->data); 
		}
		else{
			node = (root->leftChild != NULL) ? root->leftChild : root->rightChild;
			free(root);
			return node;
		}
	}
	return root;
}

int main(void)
{
	Node* root = NULL;
	root = insertNode(root, 30);
	root = insertNode(root, 15);
	root = insertNode(root, 20);
	root = insertNode(root, 30);
	root = insertNode(root, 40);
	root = deleteNode(root, 30);
	preOrder(root);
}
