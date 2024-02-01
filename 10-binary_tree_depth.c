#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of the tree
 * @tree: the node of the tree
 * Return: the depth of the tree
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t DepthofTree;

	if (tree == NULL)
		return (0);

	for (DepthofTree = 0; tree->parent; DepthofTree++)
	{
		tree = tree->parent;
	}

	return (DepthofTree);
}
