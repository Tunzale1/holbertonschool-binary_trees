#include "binary_trees.h"

<<<<<<< HEAD

size_t
binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
=======
/**
 * binary_tree_depth-function that measures the how deep a binary tree is
 * @tree: Is the ponter to a node of the binary tree they want the depth of.
 * Return: how deep the binary tree is
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf

	if (!tree || !tree->parent)
		return (0);

<<<<<<< HEAD
	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
=======
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf
}
