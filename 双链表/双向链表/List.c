#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
LTNode*BuyLTNode(LtDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
LTNode *LTInit()//����
{
	LTNode* phead = BuyLTNode(-1);
	phead->prev = phead;
	phead->next = phead;
	return phead;
}
void LTPrint(LTNode* phead)//��ӡ
{
	assert(phead);
	printf("guard");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<=>", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void LTPushBack(LTNode* phead, LtDataType x)//β��
{
	assert(phead);
	LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
void LTPushFront(LTNode* phead, LtDataType x)//ͷ��
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}
void LTPopBack(LTNode* phead)//βɾ
{
	assert(phead);
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->next;
	free(tail);
	tailprev->next = phead;
	phead->prev = tailprev;
}
void LTPopFront(LTNode* phead)//ͷɾ
{
	LTNode* next = phead->next;
	phead->next = next->next; 
	next->next->prev = phead;
	free(next);
}
LTNode* LTFind(LTNode* phead, LtDataType x)//����
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void LTInsert(LTNode* pos, LtDataType x)//����(pos֮ǰ����)
{
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode= BuyLTNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos; 
	pos->prev = newnode;
}
void LTErase(LTNode* pos)//ɾ��(posλ�õ�ֵ)
{
	LTNode* posPrev = pos->prev;
	LTNode* posNext = pos->next;
	pos->prev = posNext;
	pos->next = posPrev;
	free(pos);
}
void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = cur->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}
