#define _CRT_SECURE_NO_WARNINGS 1

#include "SList.h"

void SLTtest()
{
	SLTNode* plist = CreateSLT(5);
	SLTPushBack(&plist, 8);
	SLTPushBack(&plist, 8);
	SLTPushBack(&plist, 8);
	SLTPopBack(&plist);
	SLTPushFount(&plist, 9);
	SLTPushFount(&plist, 9);
	SLTPopFount(&plist);
	SLTNode* pos = SLTFind(plist, 0);
	SLTInsertAfter(pos, 30);
	SLTInsert(&plist, pos, 20);
	SLTPrint(plist);

	SLTEraseAfter(pos);
	SLTErase(&plist, pos);
	SLTPrint(plist);
}


int main()
{
	SLTtest();
	return 0;
}