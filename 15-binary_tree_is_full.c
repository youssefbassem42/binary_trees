#include "binary_trees.h"


/**
 * binary_tree_is_full - check if the tree is full or not
 * @tree: node of the tree
 * Return: 1 if full, 0 otherwise
*/



int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->right && tree->left)
		return ((binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left) ? 1 : 0));
	return (0);
}
