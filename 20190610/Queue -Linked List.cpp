#include<stdio.h>
#include <stdlib.h>
#define SIZE 10000
#define INF 9999999

int queue[SIZE];
int front = 0;
int rear = 0;

typedef struct {
	int data;
	struct Node* next;
} Node;

typedef struct {
	Node* front;
	Node* rear;
	int count; // 원소 개수 
} Queue;


// queue Insertion
void push (Queue* queue, int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;
	if (queue->count==0)  // If Queue is empty 
	{
		queue->front = node;
	}
	else				// If Queue is not empty
	{
		queue->rear->next = node;	// Insert node value to queue's next 
	}
	queue->rear = node;   // insert node value to rear
	queue->count++; 	// add queue count value
}

int pop(Queue* queue)
{
	if (Queue->count==0)
	{
		printf("Queue Underflow\n");
		return -INF;
	}
	Node* node = queue->front;
	int data = node->data;
	queue->front = node->next;
	free(node);
	queue->count--;
	return data;
}

void show(Queue* queue)
{
	Node* cur = queue->front;
	printf("--- 큐의 앞---\n");
	while (cur != NULL)
	{
		printf("%d\n", cur->data);
		cur = cur->next;
	}
	printf("---큐의 뒤---\n");	
}

int main(void)
{
	Queue queue;
	queue.front = queue.rear = NULL;
	queue.count = 0;
	push(&queue, 7);
	push(&queue, 5);
	push(&queue, 4);
	pop(&queue);
	push(&queue, 6);
	pop(&queue);
	show(&queue);
	
	return 0;
}
