#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to sibling node. NULL if no sibling or node or parent NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
