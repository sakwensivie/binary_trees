#include"binary_trees.h"


/**
 *  binary_tree_is_leaf - checks if a node is a leaf or not
 *
 *  @node: node to be tested
 *
 *  Return: the truth value of the test
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int truth;

	truth = 0;

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		truth = 1;

	return (truth);
}
