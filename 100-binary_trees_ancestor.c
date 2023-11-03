#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors, return NULL; else, return the common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                    const binary_tree_t *second)
{
    binary_tree_t *ancestor1 = (binary_tree_t *)first;
    binary_tree_t *ancestor2 = (binary_tree_t *)second;

    if (!ancestor1 || !ancestor2)
        return (NULL);

    // Traverse the tree upwards to find the lowest common ancestor
    while (ancestor1 != ancestor2)
    {
        if (ancestor1 == NULL)
            ancestor1 = (binary_tree_t *)second;
        else
            ancestor1 = ancestor1->parent;

        if (ancestor2 == NULL)
            ancestor2 = (binary_tree_t *)first;
        else
            ancestor2 = ancestor2->parent;
    }

    return ancestor1;
}
