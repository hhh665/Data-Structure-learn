#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void TestTopk()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int* a = (int*)malloc(sizeof(int) * n);
	if (a == NULL)
	{
		perror("malloc fail");
		return;
	}
	FILE* fin = fopen("data.txt", "w");
	if (fin == NULL)
	{
		perror("fopen fail");
		return;
	}
	srand(time(0));
	for (int i = 0; i < n; ++i)
	{
		int val = rand() % 10000;
		fprintf(fin, "%d\n", val);
	}
	fclose(fin);
	FILE* fout = fopen("data.txt", "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	int* minHeap = (int*)malloc(sizeof(int*) * k);
	if (minHeap == NULL)
	{
		perror("malloc fail");
		return;
	}
	for (int i = 0; i < k; ++i)
	{
		fscanf(fout, "%d", &minHeap[i]);
	}
	for (int i = (k - 1 - 1) / 2; i > 0; --i)
	{
		AdjustDown(minHeap, k, i);
	}
	int val = 0;
	while (fscanf(fout, "%d", &val) != EOF)
	{
		if (minHeap[0] < val)
		{
			minHeap[0] = val;
			AdjustDown(minHeap, k, 0);
		}
	}
	for (int i = 0; i < k; ++i)
	{
		printf("%d ", minHeap[i]);
	}
	printf("\n");
	fclose(fout);
	//PrintTopK(a, n, 5);
}

int main()
{
	TestTopk();
	//int array[] = { 27,15,19,18,28,34,65,49,25,37 };
	//PrintTopK(array, 10, 5);
	//HeapSort(array, sizeof(array) / sizeof(array[0]));
	/*for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
	{
		printf("%d ", array[i]);
	}*/
	//HP hp;
	//PrintTopK(array, sizeof(array) / sizeof(array[0]), 3);
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