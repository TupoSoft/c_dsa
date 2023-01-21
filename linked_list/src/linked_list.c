#include <stdlib.h>
#include <printf.h>
#include <linked_list.h>

ll *
ll_create(const int data[], int size)
{
    ll *ll = malloc(sizeof *ll);
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
ll_remove_node(ll *ll, ListNode **node)
{
    if (!(*node)) return;
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
        printf(n->next ? "%d -> " : "%d", n->val);
    }
    printf("\n");
}
