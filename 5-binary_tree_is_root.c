#include"binary_trees_t"


/**
 * binary_tree_is_root - checks if a node is a root
 *
 * @node: node to be tested
 *
 * Return: returns the truth value of the test
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	int truth = 0;

	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		truth = 1;

	return (truth);
}
