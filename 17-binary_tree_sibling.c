#include "binary_trees.h"

/**
 * binary_tree_sibling - return the sbiling of node
 * @node: node to search
 * Return: pointer to sbiling, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
