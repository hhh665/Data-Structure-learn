#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//typedef int StackDataType;
//#define N 10
//typedef struct Stack
//{
//	StackDataType* a;
//	int top;  // Õ»¶¥
//}ST;

typedef int StackDataType;
typedef struct Stack
{
	StackDataType* a;
	int capacity;  // ÈÝÁ¿
	int top;       // Õ»¶¥
}ST;

void StackInit(ST* ps);

void StackDestroy(ST* ps);

void StackPush(ST* ps, StackDataType x);

void StackPop(ST* ps);

StackDataType StackTop(ST* ps);

bool StackEmpty(ST* ps);

int StackSize(ST* ps);

