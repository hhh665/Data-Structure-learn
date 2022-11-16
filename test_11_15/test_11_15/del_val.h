#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val);