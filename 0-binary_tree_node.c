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
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
