#define _CRT_SECURE_NO_WARNINGS
#include"Stack.h"
void StackInit(ST* ps)//创建栈
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
void StackDestroy(ST* ps)//销毁栈
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
void StackPop(ST* ps)//出栈
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}
STDatatype StackTop(ST* ps)//获取栈顶元素
{
	assert(ps);
	assert(!StackEmpty(ps));
	return ps->a[ps->top - 1];
}
int  StackSize(ST* ps)//获取栈中有效元素个数
{
	assert(ps);
	return ps->top;
}
bool StackEmpty(ST* ps)//销毁栈
{
	assert(ps);
	return ps->top == 0;
}
