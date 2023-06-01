#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int LtDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LtDataType data;
}LTNode;
LTNode* LTInit();//创建
void LTPrint(LTNode* phead);//打印链表
void LTPushBack(LTNode* phead, LtDataType x);//尾插
void LTPushFront(LTNode* phead,LtDataType x);//头插
void LTPopBack(LTNode* phead);//尾删
void LTPopFront(LTNode* phead);//头删
LTNode*LTFind(LTNode* phead, LtDataType x);//查找
void LTInsert(LTNode* pos, LtDataType x);//查找(pos之前插入)
void LTErase(LTNode* pos);//删除(pos位置的值)
void LTDestroy(LTNode* phead);