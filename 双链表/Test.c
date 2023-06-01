#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
void Testlist1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPrint(plist);
}
void Testlist2()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
}
void Testlist3()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
	LTNode* pos = LTFind(plist, 3);
	if (pos)
	{
		LTInsert(pos, 30);
	}
	LTPrint(plist);
}
void Testlist4()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);
	LTPopFront(plist);
	LTPopFront(plist);
	LTPrint(plist);
}
int main()
{
    Testlist1();
	Testlist2();
	Testlist3();
	Testlist4();
	return 0;
}
