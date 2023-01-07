#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
    int num = 0;
    struct ListNode* cur1 = l1;
    struct ListNode* cur2 = l2;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* cur = head;
    int tmp = 0;
    while (cur1 && cur2)
    {
        num = cur1->val + cur2->val + tmp;
        cur->val = num % 10;
        tmp = (num - cur->val) / 10;
        if (cur1->next && cur2->next)
        {
            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
            cur->next = newnode;
            cur = cur->next;
        }
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    return head;
}

int main()
{
    struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l12 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l13 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l22 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* l23 = (struct ListNode*)malloc(sizeof(struct ListNode));
    l1->val = 7;
    l1->next = l12;
    l12->val = 1;
    l12->next = l13;
    l13->val = 6;
    l13->next = NULL;
    l2->val = 5;
    l2->next = l22;
    l22->val = 9;
    l22->next = l23;
    l23->val = 2;
    l23->next = NULL;
    addTwoNumbers(l1, l2);
    return 0;
}