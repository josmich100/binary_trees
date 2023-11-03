#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, return 0; otherwise, return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t depth = 0;
    while (tree->parent)
    {
        depth++;
        tree = tree->parent;
    }

    return depth;
}
