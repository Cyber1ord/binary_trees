#include "binary_trees.h"
/**
 * binary_tree_is_root - this function sees if a node is root
 * Return: 1 if node is root
 * @node: pointer to node
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int i = 0;

	if (node && !(node->parent))
		i = 1;

	return (i);
}
