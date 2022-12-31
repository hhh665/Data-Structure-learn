#define _CRT_SECURE_NO_WARNINGS 1\

#include "Sort.h"
#include "Stack.h"

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* i1, int* i2)
{
	int tmp = *i1;
	*i1 = *i2;
	*i2 = tmp;
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int mini = begin;
		int maxi = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (a[i] < a[mini])
			{
				mini = i;
			}
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}

void AdjustDown(int* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int exchange = 0;
		for (int j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				exchange = 1;
			}
		}
		if (exchange == 0)
		{
			break;
		}
	}
}

int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) / 2;
	if (a[begin] > a[mid])
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[end] > a[begin])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
	else
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}

//void QuickSort(int* a, int begin, int end)
//{
//	if (begin >= end)
//	{
//		return;
//	}
//	if ((end - begin + 1) < 15)
//	{
//		InsertSort(a + begin, end - begin + 1);
//	}
//	else
//	{
//		int mid = GetMidIndex(a, begin, end);
//		Swap(&a[begin], &a[mid]);
//		int left = begin;
//		int right = end;
//		int key = left;
//		while (left < right)
//		{
//			while (left < right && a[right] >= a[key])
//			{
//				right--;
//			}
//			while (left < right && a[left] <= a[key])
//			{
//				left++;
//			}
//			Swap(&a[left], &a[right]);
//		}
//		Swap(&a[key], &a[left]);
//		key = left;
//		QuickSort(a, begin, key - 1);
//		QuickSort(a, key + 1, end);
//	}
//}

//Hoare
int PartSort1(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[begin], &a[mid]);
	int left = begin;
	int right = end;
	int key = left;
	while (left < right)
	{
		while (a[right] >= a[key] && left < right)
		{
			right--;
		}
		while (a[left] <= a[key] && left < right)
		{
			left++;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[key], &a[left]);
	key = left;
	return key;
}

//ÍÚ¿Ó
int PartSort2(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[begin], &a[mid]);
	int left = begin;
	int right = end;
	int key = a[left];
	int hole = left;
	while (left < right)
	{
		while (a[right] >= key && left < right)
		{
			right--;
		}
		a[hole] = a[right];
		hole = right;
		while (a[left] <= key && left < right)
		{
			left++;
		}
		a[hole] = a[left];
		hole = left;
	}
	a[hole] = key;
	return hole;
}

int PartSort3(int* a, int begin, int end)
{
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int key = begin;
	int prev = begin;
	int cur = begin + 1;
	while (cur <= end)
	{
		if (a[cur] < a[key] && ++prev != cur)
		{
			Swap(&a[cur], &a[prev]);
		}
		++cur;
	}
	Swap(&a[key], &a[prev]);
	key = prev;
	return key;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	//if ((end - begin + 1) < 15)
	//{
	//	InsertSort(a + begin, end - begin + 1);
	//}
	else
	{
		int key = PartSort3(a, begin, end);
		QuickSort(a, begin, key - 1);
		QuickSort(a, key + 1, end);
	}
}

void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, begin);
	StackPush(&st, end);
	while (!StackEmpty(&st))
	{
		int right = StackTop(&st);
		StackPop(&st);
		int left = StackTop(&st);
		StackPop(&st);
		int key = PartSort3(a, left, right);
		if (key + 1 < right)
		{
			StackPush(&st, key + 1);
			StackPush(&st, right);
		}
		if (key - 1 > left)
		{
			StackPush(&st, left);
			StackPush(&st, key - 1);
		}
	}
}

void _MergeSort(int* a, int begin, int end, int* tmp)
{
	if (begin >= end)
	{
		return;
	}
	int mid = (begin + end) / 2;
	_MergeSort(a, begin, mid, tmp);
	_MergeSort(a, mid + 1, end, tmp);
	int i = begin;
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] <= a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	memcpy(a + begin, tmp + begin, sizeof(int) * (end - begin + 1));
}

void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}

//void MergeSortNonR(int* a, int n)
//{
//	int* tmp = (int*)malloc(sizeof(int) * n);
//	if (tmp == NULL)
//	{
//		perror("malloc fail");
//		exit(-1);
//	}
//	int range = 1;
//	while (range < n)
//	{
//		for (int i = 0; i < n; i += range * 2)
//		{
//			int begin1 = i, end1 = i + range - 1;
//			int begin2 = i + range, end2 = i + range * 2 - 1;
//			int j = i;
//			if (end1 >= n)
//			{
//				break;
//			}
//			else if (begin2 >= n)
//			{
//				break;
//			}
//			else if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//			while (begin1 <= end1 && begin2 <= end2)
//			{
//				if (a[begin1] <= a[begin2])
//				{
//					tmp[j++] = a[begin1++];
//				}
//				else
//				{
//					tmp[j++] = a[begin2++];
//				}
//			}
//			while (begin1 <= end1)
//			{
//				tmp[j++] = a[begin1++];
//			}
//			while (begin2 <= end2)
//			{
//				tmp[j++] = a[begin2++];
//			}
//			memcpy(a + i, tmp + i, sizeof(int) * (end2 - i + 1));
//		}
//		range *= 2;
//	}
//	free(tmp);
//	tmp = NULL;
//}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	if (tmp == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	int range = 1;
	while (range < n)
	{
		for (int i = 0; i < n; i += range * 2)
		{
			int begin1 = i, end1 = i + range - 1;
			int begin2 = i + range, end2 = i + range * 2 - 1;
			int j = i;
			if (end1 >= n)
			{
				end1 = n - 1;
				begin2 = n;
				end2 = n - 1;
			}
			else if (begin2 >= n)
			{
				begin2 = n;
				end2 = n - 1;
			}
			else if (end2 >= n)
			{
				end2 = n - 1;
			}
			while (begin1 <= end1 && begin2 <= end2)
			{
				if (a[begin1] <= a[begin2])
				{
					tmp[j++] = a[begin1++];
				}
				else
				{
					tmp[j++] = a[begin2++];
				}
			}
			while (begin1 <= end1)
			{
				tmp[j++] = a[begin1++];
			}
			while (begin2 <= end2)
			{
				tmp[j++] = a[begin2++];
			}
		}
		memcpy(a, tmp, sizeof(int) * n);
		range *= 2;
	}
	free(tmp);
	tmp = NULL;
}

void QuickSort1(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
	}
	if ((end - begin + 1) < 15)
	{
		InsertSort(a + begin, end - begin + 1);
	}
	else
	{
		int mid = GetMidIndex(a, begin, end);
		Swap(&a[mid], &a[begin]);
		int left = begin;
		int cur = begin + 1;
		int right = end;
		int key = a[begin];
		while (cur <= right)
		{
			if (a[cur] < key)
			{
				Swap(&a[cur], &a[left]);
				cur++;
				left++;
			}
			else if (a[cur] > key)
			{
				Swap(&a[cur], &a[right]);
				right--;
			}
			else
			{
				cur++;
			}
		}
		QuickSort1(a, begin, left - 1);
		QuickSort1(a, right + 1, end);
	}
}