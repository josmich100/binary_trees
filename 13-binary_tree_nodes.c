#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: The number of nodes with at least one child in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;
    }

    size_t nodes = 0;

    if (tree->left || tree->right) {
        nodes = 1;
    }

    nodes += binary_tree_nodes(tree->left);
    nodes += binary_tree_nodes(tree->right);

    return nodes;
}
