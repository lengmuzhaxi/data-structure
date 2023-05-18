#pragma once
#include<stdio.h>
#include<stdbool.h>
#include<assert.h>
#include<stdlib.h>
typedef int HPDatatype;
typedef struct Heap
{
	HPDatatype* a;
	int size;
	int capacity;
}HP;
void HPInit(HP* php);
void HPDestroy(HP* php);
void HPPush(HP* php, HPDatatype x);
void AdjustDown(HPDatatype* a,int parent);
void HPPop(HP* php);
bool HPEmpty(HP* php);
HPDatatype HPTop(HP* php);
int HPSize(HP* php);
void HPPrint(HP* php);
void AdjustUP(HPDatatype* a, int size, int parent);
