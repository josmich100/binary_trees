#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Call the provided function for the current node */
	func(tree->n);
	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);
	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}