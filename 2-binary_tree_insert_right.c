#include"binary_trees.h"


/**
 * binary_tree_insert_right - inserts to the right of the parent tree
 *
 * @parent: parent of the new node to be inserted
 * @value: the value to be inserted in the new node
 *
 * Return: returns the pointer to the new node inserted
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	new->parent = parent;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right = new;
	}
	else
	{
		parent->right = new;
	}

	return (new);
}
