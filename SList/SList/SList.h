#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;

SLTNode* BuySListNode(SLTDataType x);

SLTNode* CreateSLT(int n);

void SLTPrint(SLTNode* phead);

void SLTPushBack(SLTNode** pphead, SLTDataType x);

void SLTPopBack(SLTNode** pphead);

void SLTPushFount(SLTNode** pphead, SLTDataType x);

void SLTPopFount(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

void SLTInsertAfter(SLTNode* pos, SLTDataType x);

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SLTEraseAfter(SLTNode* pos);

void SLTErase(SLTNode** pphead, SLTNode* pos);

void SLTDestroy(SLTNode** pphead);
