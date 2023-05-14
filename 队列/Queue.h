#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int QDatatype;
typedef struct QueueNode
{
	struct QueueNode* next;
	QDatatype data;
}QNode;
typedef struct Queue
{
	QNode* phead;
	QNode* ptail;
	int size;
}Queue;
void QueueInit(Queue*pq);//创建队列
void QueueDestroy(Queue* pq);//销毁队列
void QueuePush(Queue* pq, QDatatype x);// 队尾入队列
void QueuePop(Queue* pq);
QueueFront(Queue* pq);
QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);