#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = { -3, -5, -3, 278,109,63,930,589,184,505,269,8,83 };
	int n = sizeof(a) / sizeof(int);
	CountSort(a, n);
	PrintArray(a,n);
	return 0;
}