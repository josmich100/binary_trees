#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;
    }

    size_t size = 1;  // Start with the root node

    size += binary_tree_size(tree->left);   // Add the size of the left subtree
    size += binary_tree_size(tree->right);  // Add the size of the right subtree

    return size;
}
