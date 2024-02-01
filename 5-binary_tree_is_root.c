#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root or not
 * @node: node
 * Return: 1 if root, 0 if the node is NULL and otherwise
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent)
	{
		return (0);
	}
	else
		return (1);
}
