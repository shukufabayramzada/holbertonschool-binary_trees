#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - a function that inserts a node as
 * the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: value that will be stored in new_node
 * Return: pointer to the new_node or NULL depends on the case
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		new_node->right = NULL;
	}
	else
	{
		new_node->right = (*parent).right;
		parent->right->parent = new_node;
	}
	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;

	parent->right = new_node;

	return (new_node);
}
