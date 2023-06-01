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
LTNode* LTInit();//����
void LTPrint(LTNode* phead);//��ӡ����
void LTPushBack(LTNode* phead, LtDataType x);//β��
void LTPushFront(LTNode* phead,LtDataType x);//ͷ��
void LTPopBack(LTNode* phead);//βɾ
void LTPopFront(LTNode* phead);//ͷɾ
LTNode*LTFind(LTNode* phead, LtDataType x);//����
void LTInsert(LTNode* pos, LtDataType x);//����(pos֮ǰ����)
void LTErase(LTNode* pos);//ɾ��(posλ�õ�ֵ)
void LTDestroy(LTNode* phead);