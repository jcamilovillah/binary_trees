#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 *
 * @node: node to be checked
 *
 * Return: 1 if node is a leaf. 0 otherwise or in case of error
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
