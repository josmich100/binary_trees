nclude "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is not full, return 0; otherwise, return 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 1; // An empty tree is considered full
    }

    if ((tree->left == NULL && tree->right == NULL) && 
        is_full_recursive(tree->left) && is_full_recursive(tree->right)) {
        return 1;
    }

    return 0; // The tree is not full
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not full, return 0; otherwise, return 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL) {
        return 0;
    }

    return is_full_recursive(tree);
}
