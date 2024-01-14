#include "binary_trees.h"
<<<<<<< HEAD


size_t
binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}


int
binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
=======
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * binary_tree_is_perfect - fuction that check if a tree is perfect
 * @tree: data
 *
 * Return: 1 on success, 0 if fail.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0,
			left_leaves = 0,
			right_height = 0,
			right_leaves = 0;

	if (!tree)
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

<<<<<<< HEAD
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
=======
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves == right_leaves);
>>>>>>> 2e7d664617c8c8c48ddb3b05cc2bc50b071905bf
}
