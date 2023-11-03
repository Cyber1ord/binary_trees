#include "binary_trees.h"


/**
 * binary_tree_is_leaf - checks leaf
 * Return: 1 or 0
 * @node: node
 *
 *
 **/


int binary_tree_is_leaf(const binary_tree_t *node)
{
	int i = 0;

	if (node && !(node->left) && !(node->right))
		i = 1;

	return (i);
}


/**
 * binary_tree_leaves - counts tree leaves
 * Return: number of leaves
 * @tree: tree
 *
 *
 **/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
