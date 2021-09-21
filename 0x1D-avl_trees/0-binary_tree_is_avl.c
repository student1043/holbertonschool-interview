#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>
#include <limits.h>

/**
 * RH - height measure
 * @tree: tree
 * Return: 1
 */
size_t RH(const binary_tree_t *tree)
{
	size_t a, b = 0;

	if (tree == NULL)
		return (0);
	a = RH(tree->left);
	b = RH(tree->right);
	if (a > b)
		return (a + 1);
	return (b + 1);
}

/**
 * binary_tree_height - RH
 * @tree: tree
 * Return: 1
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (RH(tree) - 1);
}

/**
 * is_balanced_bst - check if balanced bst
 * @tree: tree
 * @min: int
 * @max: int
 * Return: 1
 */
int is_balanced_bst(const binary_tree_t *tree, int min, int max)
{
	int a, b;

	if (!tree)
		return (1);
	a = (tree->left)
		? (int)binary_tree_height(tree->left)
		: 0;
	b = (tree->right)
		? (int)binary_tree_height(tree->right)
		: 0;
	if (abs(a - b) > 1)
		return (0);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_balanced_bst(tree->left, min, tree->n - 1) &&
					is_balanced_bst(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: tree
 * Return: 1
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_balanced_bst(tree, INT_MIN, INT_MAX));
}
