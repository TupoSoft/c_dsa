#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode *list_create(const int data[], int dataSize);

void list_remove_node(ListNode **node);

void list_destroy(ListNode *head);

void list_print(ListNode *head);

#endif //LINKED_LIST_H
