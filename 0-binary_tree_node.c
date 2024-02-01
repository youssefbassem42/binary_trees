#include "binary_trees.h"

/**
* binary_tree_node - Function Creates a Tree Node
* @parent:  pointer to the parent node of the node to create
* @value: is the value to put in the new node
* Return: New Node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
