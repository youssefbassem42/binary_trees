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
/**
 * binary_tree_size - measure the size of the tree
 * @tree: the node of the tree
 * Return: the size of the tree
*/


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t SizeofTheTree = 0;

	if (tree == NULL)
		return (0);

	SizeofTheTree = binary_tree_size(tree->left)
		+ binary_tree_size(tree->right) + 1;

	return (SizeofTheTree);
}
/**
 * binary_tree_nodes - return the number of nodes
 * @tree: tree node
 * Return: the number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
