#include "binary_trees.h"


/**
 * binary_tree_height - return the height of the tree
 * @tree: the pointer of the tree
 * Return: the height of the tree
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	heightLeft = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	heightRight = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	if (heightLeft > heightRight)
		return (heightLeft);
	else
		return (heightRight);
	return (tree == NULL);
}
