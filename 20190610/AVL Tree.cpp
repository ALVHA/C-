#include <stdio.h>
#include <stdlib.h>

int getMax(int a, int b){
	if (a>b) return a;
	return b;
}

struct Node {
	int data;
	int height;
	struct Node* leftChild;
	struct Node* rightChild;	
};

int getHeight(Node* node)
{
	if (node==NULL) return 0;
	return node->height;
}

void setHeight(Node* node)
{
	node->height = getMax(getHeight(node->leftChild), getHeight(node->rightChild))+1;
	
}

int getDifference(Node* node)
{
	if (node == NULL) return 0;
	Node* leftChild = node->leftChild;
	Node* rightChild = node->rightChild;
	return getHeight(leftChild) - getHeight(rightChild);
}

Node* rotateLL(Node* node)
{
	Node* leftChild = node->leftChild;
	node->leftChild = leftChild->rightChild;
	leftChild->rightChild = node;
	setHeight(node);
	return leftChild;
}

Node* rotateRR(Node* node)
{
	Node* rightChild = node->rightChild;
	node->rightChild = rightChild->leftChild;
	rightChild->leftChild=node;
	setHeight(node);
	return rightChild;
}

Node* rotateLR(Node* node)
{
	Node* leftChild = node -> leftChild;
	node->leftChild = rotateRR(leftChild);
	return rotateLL(node);
}

Node* rotateRL(Node* node)
{
	Node* rightChild = node->rightChlid;
	ndoe->rightChild = rotateLL(rightChild);
	return rotateRR(node);
}

Node* getBalance(Node* node)
{
	int difference = getDifference(node);
	if (difference >= 2)
	{
		if (getDifference(node->leftChild) >= 1){
			node =rotateLL(node);
		}
		else{
			node = rotateLR(node);
		}
	}
	else if (difference <= -2)
	{
		if (getDifference(node->rightChild) <= -1){
			node = rotateRR(node);
		}
		else {
			node =rotateRL(node);
		}
	}
	setHeight(node);
	return node;
}

Node* insertNode(Node* node, int data)
{
	if(!node)
	{
		node = (Node*)malloc(sizeof(Node));
		node->data =  data;
		node->height = 1;
		node->leftChild = node->rightChild = NULL;
	}
	else if(data < node->data){
		node->leftChild = insertnode(node->leftChild, data);
		node = getBalance(node);
	}
	else if(data > node->data){
		node->rightChild = insertNode(node->rightChild, data);
		node= getBalance(n0de);
	}
	else{
		printf("데이터 중복 \n")
	}
	return node;
}

void display(Node* node, int level)
{
	if (node!= NULL)
	{
		display(node->rightChild, level+1);
		printf("\n");
		if (node==root)
		{
			printf("Root:");
		}
		for (int i = 0; i < level && node != root; i++){
			printf("   ");
		}
		printf("%d(%d)", node->data, getHeight(node));
		display(node->leftChild, level + 1);
	}
}

int main(void)
{
	
	root = insertNode(root, 7);
	root = insertNode(root, 3);
	root = insertNode(root, 2);
	root = insertNode(root, 1);
	root = insertNode(root, 9);
	root = insertNode(root, 14);
	root = insertNode(root, 71);
	root = insertNode(root, 33);
	root = insertNode(root, 4441);
	root = insertNode(root, 213);
	root = insertNode(root, 372);
	display(root, 1);
	printf("\n");
	
}
