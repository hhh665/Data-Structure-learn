#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//无头单向非循环链表增删查改的实现
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
//动态申请一个结点
SLTNode* BuySListNode(SLTDataType x);

SLTNode* CreateSLT(int n);
//单链表打印
void SLTPrint(SLTNode* phead);
//单链表尾插
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//单链表尾删
void SLTPopBack(SLTNode** pphead);
//单链表头插
void SLTPushFount(SLTNode** pphead, SLTDataType x);
//单链表头删
void SLTPopFount(SLTNode** pphead);
//单链表查找
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//单链表pos之后插入x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//单链表pos之前插入x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//单链表删除pos之后的结点
void SLTEraseAfter(SLTNode* pos);
//单链表删除pos结点
void SLTErase(SLTNode** pphead, SLTNode* pos);
//单链表销毁
void SLTDestroy(SLTNode** pphead);
