#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//��ͷ�����ѭ��������ɾ��ĵ�ʵ��
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
}SLTNode;
//��̬����һ�����
SLTNode* BuySListNode(SLTDataType x);

SLTNode* CreateSLT(int n);
//�������ӡ
void SLTPrint(SLTNode* phead);
//������β��
void SLTPushBack(SLTNode** pphead, SLTDataType x);
//������βɾ
void SLTPopBack(SLTNode** pphead);
//������ͷ��
void SLTPushFount(SLTNode** pphead, SLTDataType x);
//������ͷɾ
void SLTPopFount(SLTNode** pphead);
//���������
SLTNode* SLTFind(SLTNode* phead, SLTDataType x);
//������pos֮�����x
void SLTInsertAfter(SLTNode* pos, SLTDataType x);
//������pos֮ǰ����x
void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);
//������ɾ��pos֮��Ľ��
void SLTEraseAfter(SLTNode* pos);
//������ɾ��pos���
void SLTErase(SLTNode** pphead, SLTNode* pos);
//����������
void SLTDestroy(SLTNode** pphead);
