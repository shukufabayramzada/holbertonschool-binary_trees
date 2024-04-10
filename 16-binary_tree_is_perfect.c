#include "binary_trees.h"

/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if @tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_size - Computes the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: Size of the tree, 0 if @tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, expected_size, actual_size;

    if (tree == NULL)
        return (0);

    height = binary_tree_height(tree);
    expected_size = (1 << (height + 1)) - 1;
    actual_size = binary_tree_size(tree);

    return (expected_size == actual_size);
}
