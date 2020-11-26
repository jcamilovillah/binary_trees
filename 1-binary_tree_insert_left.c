#include "binary_trees.h"

/**
 * binary_tree_insert_left - that inserts a node as the left-child
 * of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *aux;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	else
	{
		aux = parent->left;
		aux->parent = new_node;
		parent->left = new_node;
		new_node->left = aux;
	}
	return (new_node);
}
