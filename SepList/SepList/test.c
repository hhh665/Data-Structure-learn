#define _CRT_SECURE_NO_WARNINGS 1

#include "SepList.h"

enum Option
{
	EXIT,
	PRINT,
	PUSHB,
	PUSHF,
	POPF,
	POPB,
	FIND,
	INSERT,
	ERASE
};

void menu()
{
	printf("**************************\n");
	printf("**  1.Print     2.PushB **\n");
	printf("**  3.PushF     4.PopF  **\n");
	printf("**  5.PopB      6.Find  **\n");
	printf("**  7.Insert    8.Erase **\n");
	printf("**         0.exit       **\n");
	printf("**************************\n");
	printf("��������ţ�\n");
}

int main()
{
	int n = 0;
	int ret = 0;
	int e = 0;
	int x = 0;
	SL sl;
	SLInit(&sl);
	do
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case EXIT:
			printf("�˳�����\n");
			break;
		case PRINT:
			SLPrint(&sl);
			break;
		case PUSHB:
			printf("������Ҫβ���ֵ��\n");
			scanf("%d", &e);
			SLPushBack(&sl, e);
			printf("β��ɹ�\n");
			break;
		case PUSHF:
			printf("������Ҫͷ���ֵ��\n");
			scanf("%d", &e);
			SLPushFront(&sl, e);
			printf("ͷ��ɹ�\n");
			break;
		case POPF:
			SLPopFront(&sl);
			printf("ͷɾ�ɹ�\n");
			break;
		case POPB:
			SLPopFront(&sl);
			printf("βɾ�ɹ�\n");
			break;
		case FIND:
			printf("������ҪѰ�ҵ�ֵ��\n");
			scanf("%d", &e);
			ret = SLFind(&sl, e);
			if (ret == -1)
			{
				printf("������\n");
			}
			else
			{
				printf("�±�Ϊ��%d\n", ret);
			}
			break;
		case INSERT:
			printf("������Ҫ����ֵ��λ�ã�\n");
			scanf("%d", &x);
			printf("������Ҫ�����ֵ��\n");
			scanf("%d", &e);
			SLInsert(&sl, x, e);
			printf("����ɹ�\n");
			break;
		case ERASE:
			printf("������Ҫɾ����ֵ��λ�ã�\n");
			scanf("%d", &x);
			SLErase(&sl, x);
			printf("ɾ���ɹ�\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (n);
	SLDestory(&sl);
	return 0;
}