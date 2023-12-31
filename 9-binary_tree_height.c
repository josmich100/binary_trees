#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If the tree is NULL, the function returns 0; otherwise, it returns the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;
    }

    size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

    return (left_height > right_height) ? left_height : right_height;
}
