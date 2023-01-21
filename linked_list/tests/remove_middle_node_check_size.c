// ^2
#include <printf.h>
#include <linked_list.h>

int main(void)
{
    int arr1[] = {1, 2, 3};
    ll* ll = ll_create(arr1, 3);
    ll_remove_node(ll, &ll->head->next);
    printf("%d", ll->size);
    ll_destroy(ll);
    return 0;
}
