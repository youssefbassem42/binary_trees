#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the node is leaf or not
 * @node: node
 * Return: 1 if leaf, 0 if the node is NULL and otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
	{
		return (0);
	}
	else
		return (1);
}
