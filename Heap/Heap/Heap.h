#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

//void HeapCreat(HP* php);
void HeapInit(HP* php);
void HeapDestroy(HP* php);
void HeapPrint(HP* php);

void HeapPush(HP* php, HPDataType x);


