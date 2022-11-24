#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int StackDataType;
typedef struct Stack
{
	StackDataType* a;
	int capacity;
	int top;
}ST;

void StackInit(ST* ps);

void StackDestroy(ST* ps);

void StackPush(ST* ps, StackDataType x);

void StackPop(ST* ps);

StackDataType StackTop(ST* ps);

bool StackEmpty(ST* ps);

int StackSize(ST* ps);