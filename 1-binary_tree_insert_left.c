#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 *		a node as the left-child of another node
 * @parent: Parent Node to the Tree
 * @value: Value of the Node to insert
 *
 * Return: Pointer to the Node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *InsertLeft;

	InsertLeft = malloc(sizeof(binary_tree_t));

	if (InsertLeft == NULL || parent == NULL)
	{
		return (NULL);
	}
	InsertLeft->n = value;
	InsertLeft->parent = parent;
	InsertLeft->right = NULL;
	InsertLeft->left = NULL;

	if (parent->left != NULL)
	{
		InsertLeft->left = parent->left;
		InsertLeft->left->parent = InsertLeft;
	}

parent->left = InsertLeft;

return (InsertLeft);
}
