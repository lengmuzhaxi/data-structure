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
void QueueInit(Queue*pq);//´´½¨¶ÓÁÐ
void QueueDestroy(Queue* pq);//Ïú»Ù¶ÓÁÐ
void QueuePush(Queue* pq, QDatatype x);// ¶ÓÎ²Èë¶ÓÁÐ
void QueuePop(Queue* pq);
QueueFront(Queue* pq);
QueueBack(Queue* pq);
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
