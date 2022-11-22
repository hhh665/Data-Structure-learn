#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
	int val;
	struct Node* next;
	struct Node* random;
};

struct Node* Creatlist()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->val = 3;
    struct Node* newnode1 = (struct Node*)malloc(sizeof(struct Node));
    newnode1->val = 3;
    head->next = newnode1;
    struct Node* newnode2 = (struct Node*)malloc(sizeof(struct Node));
    newnode2->val = 5;
    newnode1->next = newnode2;
    struct Node* newnode3 = (struct Node*)malloc(sizeof(struct Node));
    newnode3->val = 7;
    newnode2->next = newnode3;
    struct Node* newnode4 = (struct Node*)malloc(sizeof(struct Node));
    newnode4->val = 4;
    newnode3->next = newnode4;
    newnode4->next = NULL;
    head->random = NULL;
    newnode1->random = newnode3;
    newnode2->random = newnode2;
    newnode3->random = head;
    newnode4->random = newnode1;
    return head;
}

struct Node* copyRandomList(struct Node* head) {
    struct Node* newhead = (struct Node*)malloc(sizeof(struct Node));
    if (newhead == NULL)
    {
        return;
    }
    newhead->val = head->val;
    struct Node* cur1 = head->next;
    struct Node* cur2 = newhead;
    struct Node* newnode;
    while (cur1)
    {
        newnode = (struct Node*)malloc(sizeof(struct Node));
        if (newnode == NULL)
        {
            return;
        }
        cur2->next = newnode;
        newnode->val = cur1->val;
        cur1 = cur1->next;
        cur2 = cur2->next;
    }
    cur2->next = NULL;
    cur1 = head;
    cur2 = newhead;
    while (cur2)
    {
        int count = 0;
        struct Node* Random1 = cur1->random, * head1 = head;
        while (Random1 != head1)
        {
            ++count;
            head1 = head1->next;
        }
        head1 = head;
        cur1 = cur1->next;
        struct Node* Random2 = newhead;
        while (count--)
        {
            Random2 = Random2->next;
        }
        cur2->random = Random2;
        cur2 = cur2->next;
    }
    return newhead;
}

int main()
{
    struct Node* head = Creatlist();
    copyRandomList(head);
    return 0;
}