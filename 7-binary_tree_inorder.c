#include "binary_trees.h"

/**
 * binary_tree_inorder - checks if a node is a leaf
 *
 * @tree: node to be checked
 * @func: func print
 * Return: 1 if node is a leaf. 0 otherwise or in case of error
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
