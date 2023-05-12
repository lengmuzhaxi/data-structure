#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void StackInit(ST* ps)//����ջ
{
	ps->a = (STDatatype*)malloc(sizeof(STDatatype) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->capacity = 4;
	ps->top = 0;
}
void StackDestroy(ST* ps)//����ջ
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}
void StackPush(ST* ps, STDatatype x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		STDatatype* tmp = (STDatatype*)realloc(ps->a,sizeof(STDatatype) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->a = tmp;
		ps->capacity *=2;
	}
	ps->a[ps->top] = x;
	ps->top++;
}
void StackPop(ST* ps)//��ջ
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}
STDatatype StackTop(ST* ps)//��ȡջ��Ԫ��
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}
int  StackSize(ST* ps)//��ȡջ����ЧԪ�ظ���
{
	assert(ps);
	return ps->top;
}
bool StackEmpty(ST* ps)//����ջ
{
	assert(ps);
	return ps->top == 0;
}
