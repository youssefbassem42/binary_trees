#include "binary_trees.h"


/**
 * binary_tree_postorder - print a tree in postorder way
 * @tree: the tree to print
 * @func: pointer to function that accept a intger argument
 *			and applied to each node
*/


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
