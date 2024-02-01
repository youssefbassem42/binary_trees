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
 * power_function - function to calcualte the power of number
 * @x: the number
 * @y: the power
 * Return: the power of number
*/
int power_function(int x, int y)
{
	if (y < -1)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * power_function(x, y - 1));
}
/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: node of tree
 * Return: 1 if perfect, 0 otherwise
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t heightoftree = 0;
	size_t nodescounter = 0;
	size_t powerofnodes = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	heightoftree = binary_tree_height(tree);
	nodescounter = binary_tree_size(tree);

	powerofnodes = (size_t)power_function(2, heightoftree + 1);
	return (powerofnodes - 1 == nodescounter);
}
