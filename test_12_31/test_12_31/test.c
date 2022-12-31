#define _CRT_SECURE_NO_WARNINGS 1
#include "Sort.h"
//#include <stdio.h>
//
//int exchangeBits(int num)
//{
//    int _num = num;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        _num /= 2;
//    }
//    int n = 3;
//    for (i = 0; i < 16; i++)
//    {
//        num = num ^ n;
//        n = n << 2;
//    }
//    return num;
//}
//
//int main()
//{
//    int num = 2;
//    int ret = exchangeBits(num);
//    printf("%d\n", ret);
//    return 0;
//}

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
	int a[10] = { 9,5,8,7,6,4,2,3,1,0 };
	MergeSort(a, 10);
	PrintArray(a, 10);
}