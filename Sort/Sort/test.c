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
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	BubbleSort(a, 10);
	PrintArray(a);
	return 0;
}