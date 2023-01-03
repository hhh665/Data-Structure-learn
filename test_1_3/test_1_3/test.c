#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

void CountSort(int* a, int n)
{
	int max = a[0];
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int num = max - min + 1;
	int* tmp = (int*)calloc(num, sizeof(int));
	if (tmp == NULL)
	{
		perror("calloc fail");
		exit(-1);
	}
	for (int i = 0; i < n; i++)
	{
		tmp[a[i]]++;
	}
	int k = 0;
	for (int i = 0; i < num; i++)
	{
		while (tmp[i]--)
		{
			a[k++] = i + min;
		}
	}
}

int main()
{
	int a[] = { 9, 3, 5, 4, 9, 1, 2, 7, 8, 1, 3, 6, 5, 3, 4, 0, 10, 9, 7, 9 };
	CountSort(a, sizeof(a) / sizeof(a[0]));
	return 0;
}