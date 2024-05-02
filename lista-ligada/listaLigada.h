#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

ListNode *createNode(int data);
ListNode *insertFront(ListNode *head, int data);
ListNode *insertEnd(ListNode *head, int data);
void displayList(ListNode *head);
void freeList(ListNode *head);

#endif
