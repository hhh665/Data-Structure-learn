#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void test()
{
	ST st;

	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	int a = StackSize(&st);
	printf("%d", a);
	printf("%d\n", st.a[1]);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	a = StackSize(&st);
	printf("%d", a);
	StackEmpty(&st);
	StackPop(&st);
}

int main()
{
	test();
	return 0;
}