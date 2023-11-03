#include "binary_trees.h"

/**
 * recursive_depth - the depth of a node
 * Return: depth
 * @tree: tree
 *
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
 * @tree: tree
 *
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (recursive_depth(tree));
}

/**
 * binary_trees_ancestor - common ancestor
 * Return: pointer
 * @second: pointer
 * @first: pointer
 *
 *
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{

	if (second == NULL || first == NULL)
		return (NULL);

	if (second == first)
		return ((binary_tree_t *)first);

	if (binary_tree_depth(first) > binary_tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));

	if (binary_tree_depth(first) < binary_tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));

	return (binary_trees_ancestor(first->parent, second->parent));

}
