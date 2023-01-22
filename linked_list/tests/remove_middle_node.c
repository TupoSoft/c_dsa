// ^1 -> 3
#include <linked_list.h>

int main(void)
{
    int data[] = {1, 2, 3};
    int dataSize = sizeof data / sizeof *data;
    ListNode *head = list_create(data, dataSize);
    list_remove_node(&head->next);
    list_print(head);
    list_destroy(head);
    return 0;
}
