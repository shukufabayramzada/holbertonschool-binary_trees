#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the binary tree or 0 depends on the case
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL || ((tree->left == NULL) && (tree->right) == NULL))
	{
		return (0);
	}
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	if (left_side >= right_side)
	{
		return (left_side + 1);
	}
	else
	{
		return (right_side + 1);
	}
}
