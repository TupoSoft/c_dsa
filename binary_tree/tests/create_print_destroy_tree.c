// ^1 2 3 
#include <stdio.h>
#include <binary_tree.h>

int main(void)
{
    int data[] = {1, 2, 3};
    int dataSize = sizeof data / sizeof *data;
    TreeNode *head = binary_tree_create_from_data(data, dataSize);

    binary_tree_print(stdout, head);
    binary_tree_destroy(head);
    return 0;
}
