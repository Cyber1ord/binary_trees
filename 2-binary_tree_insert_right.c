#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new right-child node.
 * Return: A pointer to the newly created node.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = parent->right;

	parent->right = new_node;
	parent->right->parent = (parent->right != NULL) ? new_node : NULL;

	return (new_node);
}
