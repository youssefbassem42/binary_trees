#include "binary_trees.h"


/**
 * binary_tree_inorder - print a tree in inorder way
 * @tree: the tree to print
 * @func: pointer to function that accept a intger argument
 *			and applied to each node
*/


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
