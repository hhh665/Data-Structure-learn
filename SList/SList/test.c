#define _CRT_SECURE_NO_WARNINGS 1

//#include "SList.h"

//void SLTtest()
//{
//	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
//	if (newnode == NULL)
//	{
//		perror("malloc file:");
//		exit(-1);
//	}
//	newnode->data = 0;
//	newnode->next = NULL;
//	SLTNode* plist = CreateSLT(5);
//	SLTPushBack(&plist, 8);
//	SLTPushBack(&plist, 8);
//	SLTPushBack(&plist, 8);
//	SLTPopBack(&plist);
//	SLTPushFount(&plist, 9);
//	SLTPushFount(&plist, 9);
//	SLTPopFount(&plist);
//	SLTNode* pos = SLTFind(plist, 0);
//	SLTInsertAfter(pos, 30);
//	SLTInsert(&plist, pos, 20);
//	SLTPrint(plist);
//
//	SLTEraseAfter(pos);
//	SLTErase(&plist, pos);
//	SLTPrint(plist);
//}


//int main()
//{
//	SLTtest();
//	return 0;
//}
#include <stdio.h>
typedef int SLTDataType;
typedef struct SListNode
{
    SLTDataType data;
    struct SListNode* next;
}SLTNode;

int main()
{
    SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
    if (newnode == NULL)
    {
        perror("malloc file:");
        exit(-1);
    }
    newnode->data = 0;
    newnode->next = NULL;
    //struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode* l12 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode* l13 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode* l22 = (struct ListNode*)malloc(sizeof(struct ListNode));
    //struct ListNode* l23 = (struct ListNode*)malloc(sizeof(struct ListNode));
    ////l1->val = 7;
    //l1->next = NULL;
    //l12->val = 1;
    //l12->next = l13;
    //l13->val = 6;
    //l13->next = NULL;
    //l2->val = 5;
    //l2->next = l22;
    //l22->val = 9;
    //l22->next = l23;
    //l23->val = 2;
    //l23->next = NULL;
    //addTwoNumbers(l1, l2);
    return 0;
}