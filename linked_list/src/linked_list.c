#include <stdlib.h>
#include <stdio.h>
#include <linked_list.h>

ListNode *
list_create(const int data[], int dataSize)
{
    ListNode *head = NULL;
    for (; dataSize; --dataSize) {
        ListNode* new = malloc(sizeof(ListNode));
        new->val = data[dataSize - 1];
        new->next = head;
        head = new;
    }
    return head;
}

void
list_remove_node(ListNode **node)
{
    if (!(*node)) return;
    ListNode *tmp = *node;
    *node = (*node)->next;
    free(tmp);
    tmp = NULL;
}

void
list_destroy(ListNode *head)
{
    while (head) {
        ListNode *next = head->next;
        free(head);
        head = NULL;
        head = next;
    }
}

void
list_print(ListNode *head)
{
    while (head) {
        printf(head->next ? "%d -> " : "%d", head->val);
        head = head->next;
    }
    printf("\n");
}
