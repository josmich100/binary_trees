#include "binary_trees.h"

/**
 * binary_tree_level - Perform a function on a specific level of a binary tree.
 * @tree: Pointer to the root of the tree.
 * @level: Level of the tree to perform the function on.
 * @func: Function to perform.
 */
void binary_tree_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
    if (tree == NULL)
        return;

    if (level == 1)
        func(tree->n);
    else if (level > 1)
    {
        binary_tree_level(tree->left, level - 1, func);
        binary_tree_level(tree->right, level - 1, func);
    }
}

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node (value as a parameter).
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    size_t height = binary_tree_height(tree);

    for (size_t level = 1; level <= height; level++)
        binary_tree_level(tree, level, func);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height of.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left = binary_tree_height(tree->left);
    size_t right = binary_tree_height(tree->right);

    return (1 + (left > right ? left : right));
}
