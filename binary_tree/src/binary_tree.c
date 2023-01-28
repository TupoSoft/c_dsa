#include <stdlib.h>
#include <stdio.h>
#include <binary_tree.h>

TreeNode *
binary_tree_create_node(const int val)
{
    TreeNode *head = malloc(sizeof(TreeNode));
    head->left = NULL;
    head->right = NULL;
    head->val = val;

    return head;
}

void
binary_tree_insert_element(TreeNode *head, const int val)
{
    if (head == NULL) {
        head = binary_tree_create_node(val);
    }
    else {
        if (val > head->val) binary_tree_insert_element(head->right, val);
        else binary_tree_insert_element(head->left, val);
    }
}

void
binary_tree_remove_element(TreeNode *head, const int val)
{

}

void
binary_tree_destroy(TreeNode *head)
{
    if (head == NULL) return;
    binary_tree_destroy(head->left);
    binary_tree_destroy(head->right);
    free(head);
}

void
binary_tree_print(const FILE* fd, TreeNode *head)
{
    if (head == NULL) return;
    fprintf(fd, "%d ", head->val);
    binary_tree_print(fd, head->left);
    binary_tree_print(fd, head->right);
}
