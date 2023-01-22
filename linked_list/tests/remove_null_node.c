// ^1 -> 2 -> 3
#include <stddef.h>
#include <linked_list.h>

int main(void)
{
    int data[] = {1, 2, 3};
    int dataSize = sizeof data / sizeof *data;
    ListNode *head = list_create(data, dataSize);
    ListNode *null = NULL;
    list_remove_node(&null);
    list_print(head);
    list_destroy(head);
    return 0;
}
