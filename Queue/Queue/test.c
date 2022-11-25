#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void test()
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, 1);
	QueuePush(&q, 2);
	QueuePush(&q, 3);
	printf("%d\n", QueueEmpty(&q));
	printf("%d\n", QueueFront(&q));
	printf("%d\n", QueueBack(&q));
	QueuePop(&q);
	printf("%d\n", QueueBack(&q));
	printf("%d\n", QueueSize(&q));
}

int main()
{
	test();
	return 0;
}