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
			printf("退出程序\n");
			break;
		case INIT:
			SLInit(&sl);
			printf("初始化成功\n");
			break;
		case DEST:
			SLDestory(&sl);
			printf("销毁成功\n");
			break;
		case PRINT:
			SLPrint(&sl);
			break;
		case PUSHB:
			SLPushBack(&sl, 1);
			printf("尾插成功\n");
			break;
		case PUSHF:
			SLPushFront(&sl, 2);
			printf("头插成功\n");
			break;
		case POPF:
			SLPopFront(&sl);
			printf("头删成功\n");
			break;
		case POPB:
			SLPopFront(&sl);
			printf("尾删成功\n");
			break;
		case FIND:
			ret = SLFind(&sl, 1);
			if ( ret == -1)
			{
				printf("不存在\n");
			}
			else
			{
				printf("下标为：%d\n", ret);
			}
			break;
		case INSERT:
			SLInsert(&sl, 2, 3);
			printf("插入成功\n");
			break;
		case ERASE:
			SLErase(&sl, 3);
			printf("删除成功\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (n);
	return 0;
}