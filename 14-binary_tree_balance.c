#include "binary_trees.h"


/**
 * binary_tree_height_balanced - return the height of the tree balanced
 * @tree: the pointer of the tree
 * Return: the height of the tree
*/


size_t binary_tree_height_balanced(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		heightLeft = tree->left ? binary_tree_height_balanced(tree->left) + 1 : 1;
		heightRight = tree->right ? binary_tree_height_balanced(tree->right) + 1 : 1;
	}

	if (heightLeft > heightRight)
		return (heightLeft);
	else
		return (heightRight);

}


/**
 * binary_tree_balance - return the size of the balanced tree
 * @tree: the tree node
 * Return: the size of the tree
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	int leftsize = 0;
	int rightsize = 0;
	int totalsize = 0;

	if (tree != NULL)
	{
		leftsize = (int) binary_tree_height_balanced(tree->left);
		rightsize = (int) binary_tree_height_balanced(tree->right);
		totalsize = leftsize - rightsize;
	}
	return (totalsize);
}
