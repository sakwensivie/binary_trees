#include"binary_trees.h"


/**
 * binary_tree_node - creates an new node that is a child to the parent
 * @parent: parent of the new node
 * @value: value to be inserted in the new node
 * Return: pointer to the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
		return (new);

	if (parent->left != NULL)
	{
		parent->left = new;
		new->parent = parent;
	}
	else if (parent->right != NULL)
	{
		parent->right = new;
		new->parent;
	}
	else
	{
		return (NULL);
	}

	return (NULL);
}
