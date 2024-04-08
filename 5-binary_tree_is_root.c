#include "binary_trees.h"
/**
 * binary_tree_is_root- a function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 or  0 depends on the case
 **/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
