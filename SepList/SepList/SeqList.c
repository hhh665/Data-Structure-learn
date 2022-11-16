#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"


void SLInit(SL* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SLDestory(SL* ps)
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = ps->capacity = 0;
	}
}

void SLPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d", ps->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = Newcapacity;
	}
}

void SLPushBack(SL* ps, SLDataType x)
{
	/*assert(ps);
	CheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;*/
	SLInsert(ps, ps->size, x);
}

void SLPushFront(SL* ps, SLDataType x)
{
	/*assert(ps);
	CheckCapacity(ps);
	for (int i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = x;
	ps->size++;*/
	SLInsert(ps, 0, x);
}

void SLPopFront(SL* ps)
{
	/*assert(ps);
	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;*/
	SLErase(ps, 0);
}

void SLPopBack(SL* ps)
{
	/*assert(ps);
	assert(ps->size > 0);

	ps->size--;*/

	SLErase(ps, ps->size-1);
}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	int begin = 0;
	int end = ps->size - 1;
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos <= ps->size);
	SLCheckCapacity(ps);
	//int i = 0;
	/*for (i = ps->size-1; i >= pos; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}*/
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, size_t pos)
{
	assert(ps);
	assert(pos >= 0);
	assert(pos < ps->size);
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}