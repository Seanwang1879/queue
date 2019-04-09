#include<stdio.h>

typedef struct node{
	int vertec;
	struct node *next;
}QNODE;

typedef struct{
	NODE front, rear;
}QueueGraph;

typedef struct{
	int data[max_size];
	int front;
	int rear;
}queue;

void init(QueueGraph *Q)
{
	QNODE *node = (QNODE *)malloc(sizeof(NDOE));
	if(!node){
		return ;
	}
	
	Q->front = Q->rear = node;
	
	return ;
}

void insert(QueueGraph *Q, int data)
{
	QNODE *node = (QNODE *)malloc(sizeof(NDOE));
	if(!node){
		return ;
	}
	
	Q->rear->next = node;
	Q->rear = Q->rear->next;
	
	return ;
}

int delete(QueueGraph *Q)
{
	static int data;

	if(Q->front == Q->rear){
		return ;
	}

	data = Q->front->data;
	Q->front = Q->front->next;

	return data;
}

void init(queue *Q)
{
	Q->front = Q->rear = 0;
	while(max_size--){
		Q->data = 0;
	}
	
	return ;
}

int empty(queue *Q)
{
	if(Q->front = Q->rear){
		return 0;
	}
	
	return -1;
}

int full(queue *Q)
{
	if(Q->rear%(length+1) == Q->front){
		return 0;
	}
	
	return -1;
}

void insert(queue *Q, int data)
{
	if(!full(Q)){
		return ;
	}

	Q->data[Q->rear] = data;
	Q->rear++;

	return ;
}

void delete(queue *Q)
{
	if(!empty(Q)){
		return ;
	}

	printf("%d\n", Q->data[Q->front]);
	Q->data[Q->front] = 0;
	Q->front++;

	return ;
}





