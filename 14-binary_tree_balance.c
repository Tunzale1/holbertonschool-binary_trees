#include "binary_trees.h"


int
height(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = height(tree->left);
	height_right = height(tree->right);
	return ((height_left > height_right ? height_left : height_right) + 1);

}


int
binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = height(tree->left);
	height_right = height(tree->right);
	return (height_left - height_right);
}
