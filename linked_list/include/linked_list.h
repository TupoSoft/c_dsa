#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

typedef struct {
    int size;
    ListNode* head;
} LinkedList;

LinkedList *ll_create(const int data[], int size);
void ll_remove_node(LinkedList *ll, ListNode **node);
void ll_destroy(LinkedList *ll);
void ll_print(LinkedList* ll);

#endif //LINKED_LIST_H
