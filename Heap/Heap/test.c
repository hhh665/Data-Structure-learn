#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

int main()
{
	int array[] = { 27,15,19,18,28,34,65,49,25,37 };
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		HeapPush(&hp ,array[i]);
	}
	HeapPrint(&hp);
	HeapDestroy(&hp);
	return 0;
}