#include "binary_trees.h"

/**
 * binary_tree_leaves - return the number of leaves of each node
 * @tree: node of the tree
 * Return: the number of leaves, 0 if null
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leavescounter = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		leavescounter++;
	if (tree->right)
		leavescounter++;
	if (!tree->left && !tree->right)
		leavescounter++;
	return (leavescounter);
}
