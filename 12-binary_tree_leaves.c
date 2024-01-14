#include "binary_trees.h"

<<<<<<< HEAD

size_t
binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && !tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
=======
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: data
 *
 * Return: count of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
		size_t left_leaves = 0,
					 right_leaves = 0;

		if (!tree)
			return (0);
		if (!tree->left && !tree->right)
			return (1);
		left_leaves += binary_tree_leaves(tree->left);
		right_leaves += binary_tree_leaves(tree->right);
		return (left_leaves + right_leaves);
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf
}
