#include "binary_trees.h"


/**
 * binary_tree_preorder - print a tree in preorder way
 * @tree: the tree to print
 * @func: pointer to function that accept a intger argument
 *			and applied to each node
*/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
