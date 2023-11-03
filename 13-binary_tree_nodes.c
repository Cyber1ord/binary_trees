#include "binary_trees.h"


/**
 * binary_tree_is_parent - node is a parent
 * Return: 1 or 0
 * @node: node
 *
 *
 **/


int binary_tree_is_parent(const binary_tree_t *node)
{
	int i = 0;

	if (node && (node->left || node->right))
		i = 1;

	return (i);
}


/**
 * binary_tree_nodes - counts the nodes
 * Return: number
 * @tree: tree
 *
 *
 **/


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (binary_tree_is_parent(tree))
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
