#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"
typedef struct {
	ST pushst;
	ST popst;
} MyQueue;

bool myQueueEmpty(MyQueue* obj);
int myQueuePop(MyQueue* obj);

MyQueue* myQueueCreate() {
	MyQueue* pq = (MyQueue*)malloc(sizeof(MyQueue));
	if (pq == NULL)
	{
		return;
	}
	StackInit(&pq->pushst);
	StackInit(&pq->popst);
	return pq;
}

void myQueuePush(MyQueue* obj, int x) {
	assert(obj);
	StackPush(&obj->pushst, x);
}

int myQueuePop(MyQueue* obj) {
	assert(obj);
	assert(!myQueueEmpty(obj));
	int peek = myQueuePeek(obj);
	StackPop(&obj->popst);
	return peek;
}

int myQueuePeek(MyQueue* obj) {
	assert(obj);
	assert(!myQueueEmpty(obj));
	if (StackEmpty(&obj->popst))
	{
		while (!StackEmpty(&obj->pushst))
		{
			StackPush(&obj->popst, StackTop(&obj->pushst));
			StackPop(&obj->pushst);
		}
	}
	return StackTop(&obj->popst);
}

bool myQueueEmpty(MyQueue* obj) {
	assert(obj);
	return StackEmpty(&obj->pushst) && StackEmpty(&obj->popst);
}

void myQueueFree(MyQueue* obj) {
	assert(obj);
	StackDestroy(&obj->pushst);
	StackDestroy(&obj->popst);
	free(obj);
}

void test()
{
	MyQueue* obj = myQueueCreate();
	myQueuePush(obj, 1);
	myQueuePush(obj, 2);
	int a = myQueuePeek(obj);
	printf("%d", a);
	int b = myQueuePop(obj);
	printf("%d", b);
	myQueueFree(obj);
}

int main()
{
	test();
	return 0;
}