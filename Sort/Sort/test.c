#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

void PrintArray(int* a)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[10] = { 6,5,1,2,7,8,4,3,0,9 };
	QuickSort(a, 0, 9);
	PrintArray(a);
	return 0;
}