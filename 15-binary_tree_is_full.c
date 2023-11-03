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
 */


int binary_tree_is_parent_full(const binary_tree_t *node)
{
	int y = 0;

	if (node && node->left && node->right)
		y = 1;

	return (y);
}


/**
 * binary_tree_is_full - binary tree is full
 * Return: 1 or 0
 * @tree: tree
 *
 *
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (1);

	if (binary_tree_is_parent_full(tree))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
