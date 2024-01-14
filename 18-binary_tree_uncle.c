#include "binary_trees.h"

<<<<<<< HEAD

binary_tree_t
*binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);
	else if (grandparent->right == parent)
		return (grandparent->left);

	return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
=======
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: the node to search
 * Return: the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return ((node == node->parent->left) ?
		node->parent->right : node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to be uncleed
 * Return: pointer to the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf
}
