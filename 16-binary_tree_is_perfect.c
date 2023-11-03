#include "binary_trees.h"


/**
 * binary_tree_is_leaf - node is a leaf
 * Return: 1 or 0
 * @node: pointer
 *
 *
 **/


int binary_tree_is_leaf(const binary_tree_t *node)
{
	int x = 0;

	if (node && !(node->left) && !(node->right))
		x = 1;

	return (x);
}


/**
 * binary_tree_is_parent_full - node is a parent
 * Return: 1 or 0
 * @node: pointer
 *
 *
 **/


int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int y = 0;

	if (node && node->left && node->right)
		y = 1;

	return (y);
}


/**
 * height - height of a tree
 * Return: height
 * @tree: tree
 *
 *
 **/


int height(const binary_tree_t *tree)
{
	int x1 = 0;
	int x2 = 0;

	if (tree == NULL)
		return (-1);

	x1 = height(tree->left);
	x2 = height(tree->right);

	if (x1 > x2)
		return (x1 + 1);

	return (x2 + 1);
}


/**
 * binary_tree_is_perfect - binary tree is perfect
 * Return: 1 or 0
 * @tree: tree
 *
 *
 **/


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (binary_tree_is_leaf(tree->left) && binary_tree_is_leaf(tree->right))
			return (1);

		if (binary_tree_is_parent_full(tree))
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}
