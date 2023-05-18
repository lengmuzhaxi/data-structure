#define _CRT_SECURE_NO_WARNINGS
#include"Heap.h"
void HPPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}
void HPInit(HP* php)
{
	assert(php);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}
void AdjustDown(HPDatatype*a,int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] < a[parent])
		{
			HPDatatype tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HPDestroy(HP* php)
{
	
}
void HPPush(HP* php, HPDatatype x)
{
	assert(php);
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDatatype* tmp = (HPDatatype*)realloc(php->a, sizeof(HPDatatype) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newCapacity;
	}
	php->a[php->size] = x;
	php->size++;
	AdjustDown(php->a, php->size - 1);
}
void AdjustUP(HPDatatype* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		// 选出左右孩子中大的那一个
		if (child + 1 < size && a[child + 1] > a[child])
		{
			++child;
		}

		if (a[child] > a[parent])
		{
			HPDatatype tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void HPPop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	HPDatatype tmp =php->a[0];
	php->a[0] = php->a[php->size - 1];
	php->a[php->size - 1] = tmp;
	php->size--;
	AdjustUP(php->a, php->size, 0);
}
bool HPEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
HPDatatype HPTop(HP* php)
{
	assert(php);
	assert(php->size > 0);
	return php->a[0];
}
int HPSize(HP* php)
{
	assert(php);
	return php->size;
}
