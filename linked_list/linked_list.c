#include <stdlib.h>
#include <printf.h>
#include "linked_list.h"

static void
push_node(ListNode **prev, int data)
{
    ListNode* new = malloc(sizeof(ListNode));
    new->val = data;
    new->next = *prev;
    *prev = new;
}

ll *
ll_create(int data[], int size)
{
    ll *new = malloc(sizeof(ll));
    new->size = size;
    for (; size; --size) {
        push_node(&new->head, data[size - 1]);
    }
    return new;
}

void
ll_remove_node(ll *ll, ListNode **node)
{
    ListNode *tmp = *node;
    *node = (*node)->next;
    free(tmp);
    tmp = NULL;
    --ll->size;
}

void
ll_destroy(ll* ll)
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
ll_print(ll* ll)
{
    for (ListNode *n = ll->head; n; n = n->next) {
        printf("%d -> ", n->val);
    }
    printf("\n");
}





