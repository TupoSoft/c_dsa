// ^1 -> 2 -> 3
#include <linked_list.h>

int main(void)
{
    int arr1[] = {1, 2, 3};
    ll* ll = ll_create(arr1, 3);
    ll_print(ll);
    ll_destroy(ll);
    return 0;
}
