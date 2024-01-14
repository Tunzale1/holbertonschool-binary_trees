#include "binary_trees.h"

/**
 * binary_tree_depth-function that measures the how deep a binary tree is
 * @tree: Is the ponter to a node of the binary tree they want the depth of.
 * Return: how deep the binary tree is
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
