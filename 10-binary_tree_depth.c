#include "binary_trees.h"


/**
 * recursive_depth - node depth in tree
 * Return: depth
 * @tree: tree
 *
 **/


size_t recursive_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (recursive_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - calls recursive_depth
 * Return: depth
 * @tree: tree;
 *
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}
