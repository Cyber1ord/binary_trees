#include "binary_trees.h"

/**
 * recursive_height - height of a tree
 * Return: height
 * @tree: tree
 *
 *
 **/

size_t recursive_height(const binary_tree_t *tree)
{
	size_t x1 = 0;
	size_t x2 = 0;

	if (tree == NULL)
		return (0);

	x1 = recursive_height(tree->left);
	x2 = recursive_height(tree->right);

	if (x1 > x2)
		return (x1 + 1);

	return (x2 + 1);
}

/**
 * print_level - prints nodes
 * Return: nothing
 * @level: level node
 * @func: pointer
 * @tree: tree
 *
 *
 */

void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - prints data
 * Return: nothing
 * @tree: tree
 * @func: pointer
 *
 *
 **/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	size_t x;
	size_t y;

	if (tree == NULL || func == NULL)
		return;

	x = recursive_height(tree);

	for (y = 1; y <= x; y++)
		print_level(tree, y, func);
}
