#define _CRT_SECURE_NO_WARNINGS 1

#include "SepList.h"

enum Option
{
	EXIT,
	INIT,
	DEST,
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
	printf("**  1.Init      2.Dest  **\n");
	printf("**  3.Print     4.PushB **\n");
	printf("**  5.PushF     6.PopF  **\n");
	printf("**  7.PopB      8.Find  **\n");
	printf("**  9.Insert   10.Erase **\n");
	printf("**         0.exit       **\n");
	printf("**************************\n");
}

int main()
{
	int n = 0;
	int ret = 0;
	SL sl;
	do
	{
		menu();
		scanf("%d", &n);
		switch (n)
		{
		case EXIT:
			printf("�˳�����\n");
			break;
		case INIT:
			SLInit(&sl);
			printf("��ʼ���ɹ�\n");
			break;
		case DEST:
			SLDestory(&sl);
			printf("���ٳɹ�\n");
			break;
		case PRINT:
			SLPrint(&sl);
			break;
		case PUSHB:
			SLPushBack(&sl, 1);
			printf("β��ɹ�\n");
			break;
		case PUSHF:
			SLPushFront(&sl, 2);
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
			ret = SLFind(&sl, 1);
			if ( ret == -1)
			{
				printf("������\n");
			}
			else
			{
				printf("�±�Ϊ��%d\n", ret);
			}
			break;
		case INSERT:
			SLInsert(&sl, 2, 3);
			printf("����ɹ�\n");
			break;
		case ERASE:
			SLErase(&sl, 3);
			printf("ɾ���ɹ�\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (n);
	return 0;
}