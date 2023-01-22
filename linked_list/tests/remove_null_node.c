// ^0
#include <stddef.h>
#include <linked_list.h>
#include <stdlib.h>

int main(void)
{
    int arr1[] = {1, 2, 3};
    LinkedList* ll = ll_create(arr1, 3);
    ListNode *null = NULL;
    ll_remove_node(ll, &null);
    printf("%d", 0);
    ll_print(ll);
    ll_destroy(ll);
    return 0;
}
