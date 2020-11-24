#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new nod
 * Return: pointer to the new node. Or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *aux;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->n = value;
	new_node->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	else
	{
		aux = parent->right;
		aux->parent = new_node;
		parent->right = new_node;
		new_node->right = aux;
	}
	return (new_node);
}
