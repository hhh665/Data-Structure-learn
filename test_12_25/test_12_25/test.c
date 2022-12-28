#include "sort.h"

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
	int a[10] = { 5,1,9,3,4,7,6,0,2,8 };
	int n = sizeof(a) / sizeof(a[0]);
	BubbleSort(a, n);
	PrintArray(a, n);
	return 0;
}