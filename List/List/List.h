#pragma once

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* BuyListNode(LTDataType x);
LTNode* LTInit();

void LTPrint(LTNode* phead);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);
void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

void LTInsert(LTNode* phead, LTDataType x);
void LTErase(LTNode* phead);

bool LTEmpty(LTNode* phead);
size_t LTSize(LTNode* phead);
void LTDestroy(LTNode* phead);
