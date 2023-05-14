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
void QueueInit(Queue*pq);//��������
void QueueDestroy(Queue* pq);//���ٶ���
void QueuePush(Queue* pq, QDatatype x);// ��β�����
void QueuePop(Queue* pq);
QueueFront(Queue* pq);
QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);