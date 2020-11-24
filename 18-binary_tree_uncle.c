#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to uncle. NULL if no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_father;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	grand_father = node->parent->parent;
	if (grand_father->left == node->parent)
		return (grand_father->right);
	return (grand_father->left);
}
