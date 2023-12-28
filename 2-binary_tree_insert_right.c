#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right-child
 * of another node in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs, return NULL.
 *         Otherwise, return a pointer to the new node.
 *
 * Description: If the parent already has a right-child,
 * the new node takes its place,
 * and the old right-child becomes the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	tmp = parent->right;
	parent->right = new_node;
	new_node->right = tmp;
	if (tmp != NULL)
		tmp->parent = new_node;

	return (new_node);
}
