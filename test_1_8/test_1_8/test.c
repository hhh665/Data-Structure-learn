#define _CRT_SECURE_NO_WARNINGS 1

//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    struct ListNode* cur1 = l1;
//    struct ListNode* cur2 = l2;
//    int tmp = 0;
//    int sum = 0;
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur = newhead;
//    while (cur1 || cur2)
//    {
//        if (cur1 && cur2)
//        {
//            sum = cur1->val + cur2->val + tmp;
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            cur->next = newnode;
//            cur = cur->next;
//            cur->val = sum % 10;
//            tmp = sum / 10;
//            cur1 = cur1->next;
//            cur2 = cur2->next;
//        }
//        else if (cur1 || cur2)
//        {
//            if (cur1)
//            {
//                sum = cur1->val + tmp;
//                struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//                cur->next = newnode;
//                cur = cur->next;
//                cur->val = sum % 10;
//                tmp = sum / 10;
//                cur1 = cur1->next;
//            }
//            if (cur2)
//            {
//                sum = cur2->val + tmp;
//                struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//                cur->next = newnode;
//                cur = cur->next;
//                cur->val = sum % 10;
//                tmp = sum / 10;
//                cur2 = cur2->next;
//            }
//        }
//    }
//    if (tmp)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        cur->next = newnode;
//        cur = cur->next;
//        cur->val = tmp;
//    }
//    cur->next = NULL;
//    return newhead->next;
//}

//void Add(struct ListNode* cur1, struct ListNode* cur2, struct ListNode* cur, int tmp)
//{
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newnode->next = NULL;
//    cur->next = newnode;
//    cur = cur->next;
//    if (cur1 && cur2)
//    {
//        int sum = cur1->val + cur2->val + tmp;
//        cur->val = sum % 10;
//        tmp = sum / 10;
//        cur1 = cur1->next;
//        cur2 = cur2->next;
//    }
//    else if (cur1 || cur2)
//    {
//        if (cur1)
//        {
//            int sum = cur1->val + tmp;
//            cur->val = sum % 10;
//            tmp = sum / 10;
//            cur1 = cur1->next;
//        }
//        if (cur2)
//        {
//            int sum = cur2->val + tmp;
//            cur->val = sum % 10;
//            tmp = sum / 10;
//            cur2 = cur2->next;
//        }
//    }
//    else
//    {
//        cur->val = tmp;
//        tmp = 0;
//    }
//    if (cur1 || cur2 || tmp)
//    {
//        Add(cur1, cur2, cur, tmp);
//    }
//}
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* cur1 = l1;
//    struct ListNode* cur2 = l2;
//    struct ListNode* cur = head;
//    int tmp = 0;
//    Add(cur1, cur2, cur, tmp);
//    return head->next;
//}

//void Add(struct ListNode* cur1, struct ListNode* cur2, struct ListNode* cur, struct ListNode* prev, int tmp)
//{
//    if (cur1 == NULL || cur2 == NULL)
//    {
//        return;
//    }
//    struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    newnode->next = NULL;
//    cur->next = newnode;
//    cur = cur->next;
//    int sum = cur1->val + cur2->val + tmp;
//    cur->val = sum % 10;
//    tmp = sum / 10;
//    if (tmp)
//    {
//        prev->val += tmp;
//        tmp = 0;
//    }
//    cur1 = cur1->next;
//    cur2 = cur2->next;
//    prev = prev->next;
//    Add(cur1, cur2, cur, prev, tmp);
//}
//
//
//struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
//{
//    int n1 = 0, n2 = 0;
//    struct ListNode* cur1 = l1;
//    struct ListNode* cur2 = l2;
//    while (cur1)
//    {
//        cur1 = cur1->next;
//        n1++;
//    }
//    while (cur2)
//    {
//        cur2 = cur2->next;
//        n2++;
//    }
//    int n = abs(n1 - n2);
//    if (n1 < n2)
//    {
//        while (n--)
//        {
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            newnode->val = 0;
//            newnode->next = l1;
//            l1 = newnode;
//        }
//    }
//    else if (n1 > n2)
//    {
//        while (n--)
//        {
//            struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//            newnode->val = 0;
//            newnode->next = l2;
//            l2 = newnode;
//        }
//    }
//    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
//    head->val = 0;
//    struct ListNode* cur = head;
//    struct ListNode* prev = cur;
//    cur1 = l1;
//    cur2 = l2;
//    int tmp = 0;
//    Add(cur1, cur2, cur, prev, tmp);
//    if (head->val)
//    {
//        return head;
//    }
//    else
//    {
//        return head->next;
//    }
//}

#include <stdlib.h>
#include <stdio.h>
char* makeGood(char* s)
{
    int n = strlen(s);
    char* st = (char*)malloc(sizeof(n + 1));
    if (st == NULL)
    {
        return;
    }
    int top = 0;
    for (int i = 0; i < n; i++)
    {
        st[top++] = s[i];
        if (top >= 2 && (st[top - 1] == st[top - 2] + 32 || st[top - 1] + 32 == st[top - 2]))
        {
            top -= 2;
        }
    }
    st[top] = '\0';
    return st;
}
int main()
{
    char s[] = "leEeetcode";
    char* a = makeGood(s);
    printf("%s\n", a);
    return 0;
}