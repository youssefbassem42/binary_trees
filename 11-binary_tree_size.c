#include "binary_trees.h"
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
