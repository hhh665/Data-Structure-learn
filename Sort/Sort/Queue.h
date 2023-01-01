#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int QDataType;
//链式结构：表示队列
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;

//队列的结构
typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Queue;

void QueueInit(Queue* pq);

void QueueDestroy(Queue* pq);

void QueuePush(Queue* pq, QDataType x);

void QueuePop(Queue* pq);

QDataType QueueFront(Queue* pq);

QDataType QueueBack(Queue* pq);

bool QueueEmpty(Queue* pq);

int QueueSize(Queue* pq); 