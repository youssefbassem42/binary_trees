#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts
 *		a node as the right-child of another node
 * @parent: Parent Node to the Tree
 * @value: Value of the Node to insert
 *
 * Return: Pointer to the Node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *InsertRight;

	InsertRight = malloc(sizeof(binary_tree_t));

	if (InsertRight == NULL || parent == NULL)
	{
		return (NULL);
	}
	InsertRight->n = value;
	InsertRight->parent = parent;
	InsertRight->right = parent->right;
	InsertRight->left = NULL;

	if (parent->right != NULL)
	{
		InsertRight->right = parent->right;
		InsertRight->right->parent = InsertRight;
	}

parent->right = InsertRight;

return (InsertRight);
}
