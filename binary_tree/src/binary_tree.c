#include <stdlib.h>
#include <stdio.h>
#include <binary_tree.h>

TreeNode *
binary_tree_create_node(const int val)
{
    TreeNode *head = malloc(sizeof(*head));
    head->left = NULL;
    head->right = NULL;
    head->val = val;

    return head;
}

TreeNode *
binary_tree_insert_element(TreeNode *head, const int val)
{
    if (!head)
        binary_tree_create_node(val);

    if (val > head->val) 
        head->right = binary_tree_insert_element(head->right, val);
    else 
        head->left = binary_tree_insert_element(head->left, val);
    
    return head;
}

TreeNode *
binary_tree_smallest_node(TreeNode *head)
{
    struct TreeNode *cur = head;

    while(cur && cur->left) cur = cur->left;

    return cur;
}

TreeNode *
binary_tree_remove_element(TreeNode *head, const int val)
{
    if (!head) return head;

    if (val < head->val) head->left = binary_tree_remove_element(head->left, val);
    else if(val > head->val) head->right = binary_tree_remove_element(head->right, val);
    else {
        if (!head->left && !head->right) return NULL;
        else if (!head->left) {
            struct TreeNode *tmp = head->right;
            free(head);
            return tmp;
        }
        else if (!head->right) {
            struct TreeNode *tmp = head->right;
            free(head);
            return tmp;
        }

        struct TreeNode *tmp = binary_tree_smallest_node(head->right);
        head->val = tmp->val;
        head->right = binary_tree_remove_element(head->right, tmp->val);
    }

    return head;
}

TreeNode *
binary_tree_destroy(TreeNode *head)
{
    if (!head) return head;
    binary_tree_destroy(head->left);
    binary_tree_destroy(head->right);
    free(head);

    return NULL;
}

void
binary_tree_print(const FILE* fd, TreeNode *head)
{
    if (!head) return;
    fprintf(fd, "%d ", head->val);
    binary_tree_print(fd, head->left);
    binary_tree_print(fd, head->right);
}
