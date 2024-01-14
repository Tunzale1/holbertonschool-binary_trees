#include "binary_trees.h"


void
binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func && tree)
	{
		binary_tree_inorder(tree->left, func);
		binary_tree_inorder(tree->right, func);
		func(tree->n);
	}
}
