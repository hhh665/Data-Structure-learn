#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"

void LTtest()
{
	LTNode* phead = LTInit();
	LTPushBack(phead, 1);
	LTPushBack(phead, 2);
	LTPushBack(phead, 3);
	LTPushBack(phead, 5);
	LTPrint(phead);

	LTPopBack(phead);
	LTPopFront(phead);
	LTPushFront(phead, 3);
	LTPushFront(phead, 8);
	LTPushFront(phead, 9);
	LTPrint(phead);

	LTNode* pos = LTFind(phead, 3);
	if (pos != NULL)
	{
		LTInsert(pos, 7);
	}
	pos = LTFind(phead, 3);
	if (pos != NULL)
	{
		LTErase(pos);
	}
	LTPrint(phead);
}


int main()
{
	LTtest();
	return 0;
}