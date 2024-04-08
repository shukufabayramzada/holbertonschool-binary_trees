#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: value that will be stored in new_node
 * Return: pointer to the new_node or NULL depends on the case
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left == NULL)
	{
		new_node->left = NULL;
	}
	else
	{
		new_node->left = (*parent).left;
		parent->left->parent = new_node;
	}
	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;

	parent->left = new_node;

	return (new_node);
}
