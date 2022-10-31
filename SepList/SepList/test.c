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
	printf("请输入序号：\n");
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
			printf("退出程序\n");
			break;
		case PRINT:
			SLPrint(&sl);
			break;
		case PUSHB:
			printf("请输入要尾插的值：\n");
			scanf("%d", &e);
			SLPushBack(&sl, e);
			printf("尾插成功\n");
			break;
		case PUSHF:
			printf("请输入要头插的值：\n");
			scanf("%d", &e);
			SLPushFront(&sl, e);
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
			printf("请输入要寻找的值：\n");
			scanf("%d", &e);
			ret = SLFind(&sl, e);
			if (ret == -1)
			{
				printf("不存在\n");
			}
			else
			{
				printf("下标为：%d\n", ret);
			}
			break;
		case INSERT:
			printf("请输入要插入值的位置：\n");
			scanf("%d", &x);
			printf("请输入要插入的值：\n");
			scanf("%d", &e);
			SLInsert(&sl, x, e);
			printf("插入成功\n");
			break;
		case ERASE:
			printf("请输入要删除的值的位置：\n");
			scanf("%d", &x);
			SLErase(&sl, x);
			printf("删除成功\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (n);
	SLDestory(&sl);
	return 0;
}