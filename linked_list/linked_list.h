#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct ListNode {
    int val;
    struct ListNode* next;
} ListNode;

typedef struct {
    int size;
    ListNode* head;
} ll;

ll *ll_create(int data[], int size);
void ll_remove_node(ll *ll, ListNode **node);
void ll_destroy(ll *ll);
void ll_print(ll* ll);

#endif //LINKED_LIST_H
