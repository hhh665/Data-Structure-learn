#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;

void HeapCreat(HP* php, HPDataType* a, int n);

void HeapDestroy(HP* php);
void HeapPrint(HP* php);

void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);

HPDataType HeapTop(HP* php);
int HeapSize(HP* php);
bool HeapEmpty(HP* php);

void PrintTopK(int* a, int n, int k);

void HeapSort(int* a, int n);

