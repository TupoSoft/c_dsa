// ^1 2 
#include <stdio.h>
#include <binary_tree.h>

int main(void)
{
    int data[] = {1, 2, 3};
    int dataSize = sizeof data / sizeof *data;
    TreeNode *head = NULL;

    for (int i = 0; i < dataSize; ++i) head = binary_tree_insert_element(head, data[i]);

    head = binary_tree_remove_element(head, 3);
    binary_tree_print(stdout, head);
    binary_tree_destroy(head);
    return 0;
}
