#define _CRT_SECURE_NO_WARNINGS 1

//while (cur)
//{
//    if (cur == head)
//    {
//        if (cur->val == val)
//        {
//            cur = cur->next;
//            head = cur;
//            p = cur;
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    else if (cur->next == NULL)
//    {
//        if (cur->val == val)
//        {
//            cur = cur->next;
//            p->next = NULL;
//        }
//        else
//        {
//            cur = cur->next;
//        }
//    }
//    else
//    {
//        if (cur->val == val)
//        {
//            cur = cur->next;
//            p->next = p->next->next;
//        }
//        else
//        {
//            p = cur;
//            cur = cur->next;
//        }
//    }
//}

//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    struct ListNode* cur = head, * prev = head;
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            if (cur == head)
//            {
//                cur = cur->next;
//                free(head);
//                head = cur;
//                prev = cur;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//        else
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//    }
//    return head;
//}

//struct ListNode* removeElements(struct ListNode* head, int val)
//{
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* cur = head;
//    struct ListNode* newhead = NULL;
//    struct ListNode* tail = NULL;
//    while (cur)
//    {
//        if (cur->val != val)
//        {
//            if (tail == NULL)
//            {
//                newhead = tail = cur;
//            }
//            else
//            {
//                tail->next = cur;
//                tail = tail->next;
//            }
//            cur = cur->next;
//        }
//        else
//        {
//            struct ListNode* next = cur->next;
//            free(cur);
//            cur = next;
//        }
//    }
//    if (tail)
//    {
//        tail->next = NULL;
//    }
//    return newhead;
//}