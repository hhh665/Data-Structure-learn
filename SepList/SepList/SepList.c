#define _CRT_SECURE_NO_WARNINGS 1

#include "SepList.h"

int BinarySearch(SL* ps, int x)
{

}

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

void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int Newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, Newcapacity*sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = Newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}

void SLPushFront(SL* ps, SLDataType x)
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
	for (int i = ps->size; i > 0; i--)
	{
		ps->a[i] = ps->a[i-1];
	}
	ps->a[0] = x;
	ps->size++;
}

void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}

void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size > 0);

	ps->size--;
}

int SLFind(SL* ps, SLDataType x)
{
	assert(ps);
	int begin = 0;
	int end = ps->size - 1;
	while (begin < end)
	{
		int mid = begin + ((end - begin) >> 1);
		if (ps->a[mid] < x)
		{
			begin++;
		}
		else if (ps->a[mid] > x)
		{
			end--;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

void SLInsert(SL* ps, size_t pos, SLDataType x)
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
	int i = 0;
	for (i = ps->size; i > pos; i--)
	{
		ps->a[i] = ps->a[i - 1];
	}
	ps->a[pos] = x;
	ps->size++;
}

void SLErase(SL* ps, size_t pos)
{
	assert(ps);
	assert(ps->size > 0);
	for (int i = pos; i < ps->size; i++)
	{
		ps->a[i] = ps->a[i + 1];
	}
	ps->size--;
}