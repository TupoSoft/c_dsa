#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *binary_tree_create_node(const int val);

TreeNode *binary_tree_insert_element(TreeNode *head, const int val);

TreeNode *binary_tree_smallest_node(TreeNode *head);

TreeNode *binary_tree_remove_element(TreeNode *head, const int val);

void binary_tree_destroy(TreeNode *head);

void binary_tree_print(const FILE* fd, TreeNode *head);

#endif //BINARY_TREE_H
