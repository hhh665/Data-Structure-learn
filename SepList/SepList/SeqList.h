#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct SepList
{
	SLDataType* a;
	int size;
	int capacity;
}SL;

void SLInit(SL* ps);
void SLDestory(SL* ps);

void SLPrint(SL* ps);
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);
void SLPopFront(SL* ps);
void SLPopBack(SL* ps);

int SLFind(SL* ps,SLDataType x);
void SLInsert(SL* ps, size_t pos, SLDataType x);
void SLErase(SL* ps, size_t pos);
