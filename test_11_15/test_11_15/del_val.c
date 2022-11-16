#define _CRT_SECURE_NO_WARNINGS 1

#include "del_val.h"

struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* cur = head, * p = head;

    while (cur)
    {
        if (cur == head)
        {
            if (cur->val = val)
            {
                cur = cur->next;
                head = cur;
                p = cur;
            }
            else
            {
                cur = cur->next;
            }
        }
        else if (cur->next == NULL)
        {
            if (cur->val == val)
            {
                cur = cur->next;
                p->next = NULL;
            }
            else
            {
                cur = cur->next;
            }
        }
        else
        {
            if (cur->val == val)
            {
                cur = cur->next;
                p->next = p->next->next;
            }
            else
            {
                p = cur;
                cur = cur->next;
            }
        }
    }
    return head;
}

