#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the node is leaf
 * Return: 1 if node is a leaf, otherwise 0
 * @node: node
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int i = 0;

	if (node && !(node->left) && !(node->right))
		i = 1;

	return (i);
}
