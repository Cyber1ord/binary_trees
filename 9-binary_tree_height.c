#include "binary_trees.h"


/**
 * recursive_height - height measure
 * @tree: tree
 * Return: height
 *
 *
 **/


size_t recursive_height(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;

	if (tree == NULL)
		return (0);

	h1 = recursive_height(tree->left);
	h2 = recursive_height(tree->right);

	if (h1 > h2)
		return (h1 + 1);

	return (h2 + 1);
}


/**
 * binary_tree_height - recursive_height
 * @tree: tree
 * Return: height
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_height(tree) - 1);
}
