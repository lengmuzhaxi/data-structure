#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
void HPTest()
{
	HP hp;
	HPInit(&hp);
	int a[] = { 65,100,70,32,50,60 };
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		HPPush(&hp, a[i]);
	}
	HPPush(&hp, 10);
	HPPrint(&hp);
	HPPop(&hp);
	HPPrint(&hp);
	HPPop(&hp);
	HPPrint(&hp);
}
int main()
{
	HPTest();
	return 0;
}