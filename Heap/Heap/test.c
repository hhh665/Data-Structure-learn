#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

int main()
{
	int array[] = { 27,15,19,18,28,34,65,49,25,37 };
	HeapSort(array, sizeof(array) / sizeof(array[0]));

	//HP hp;
	//PrintTopK(array, sizeof(array) / sizeof(array[0]), 5);
	/*for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++)
	{
		HeapPush(&hp ,array[i]);
	}
	HeapPrint(&hp);
	HeapPop(&hp);
	HeapPrint(&hp);
	HeapDestroy(&hp);*/
	return 0;
}