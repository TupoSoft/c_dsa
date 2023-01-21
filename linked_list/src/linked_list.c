#include <stdlib.h>
#include <stdio.h>
#include <linked_list.h>

LinkedList *
ll_create(const int data[], int size)
{
    LinkedList *ll = malloc(sizeof *ll);
    ll->size = size;
    for (; size; --size) {
        ListNode* new = malloc(sizeof(ListNode));
        new->val = data[size - 1];
        new->next = ll->head;
        ll->head = new;
    }
    return ll;
}

void
ll_remove_node(LinkedList *ll, ListNode **node)
{
    if (!(*node)) return;
    ListNode *tmp = *node;
    *node = (*node)->next;
    free(tmp);
    tmp = NULL;
    --ll->size;
}

void
ll_destroy(LinkedList* ll)
{
    for (ListNode *curr = ll->head; ll->size; --(ll->size)) {
        ListNode *next = curr->next;
        free(curr);
        curr = NULL;
        curr = next;
    }
    free(ll);
    ll = NULL;
}

void
ll_print(LinkedList* ll)
{
    for (ListNode *n = ll->head; n; n = n->next) {
        printf(n->next ? "%d -> " : "%d", n->val);
    }
    printf("\n");
}
