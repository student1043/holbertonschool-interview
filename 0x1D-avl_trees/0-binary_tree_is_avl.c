#include "binary_trees.h"

/**
 * tree_height - height
 * @tree: pointer
 * Return: Height
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t HL = 0;
	size_t HR = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		HL = 1 + tree_height(tree->left);
	}
	if (tree->right)
	{
		HR = 1 + tree_height(tree->right);
	}
	if (HL > HR)
	{
		return (HL);
	}
	return (HR);
}

/**
 * isBST - check
 * @root: node to check
 * @min: min value
 * @max: max value
 * Return: 1
 */
int BST(const binary_tree_t *root,
					const binary_tree_t *min, const binary_tree_t *max)
{
	if (root == NULL)
		return (1);

	if (min != NULL && root->n <= min->n)
		return (0);

	if (max != NULL && root->n >= max->n)
		return (0);

	return (BST(root->left, min, root) && BST(root->right, root, max));
}

/**
 * tree_is_bst - check
 * @tree: a pointer
 * Return: 1
 */
int tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (BST(tree, NULL, NULL));
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	return (avl_check(tree));
}

/**
 * avl_check - check
 * @tree: pointer
 * Return: 1
 */
int avl_check(const binary_tree_t *tree)
{
	int difference, HL = 0, HR = 0;

	if (!tree)
	{
		return (1);
	}
	if (!tree_is_bst(tree))
	{
		return (0);
	}
	HL = tree_height(tree->left);
	HR = tree_height(tree->right);
	difference = abs(HL - HR);
	if (difference == 0 && avl_check(tree->left) && avl_check(tree->right))
	{
		return (1);
	}
	return (0);
}
