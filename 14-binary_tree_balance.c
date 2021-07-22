#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor of a binary tree otherwise 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);
	lheight = binary_tree_height(tree->left);
	rheight = binary_tree_height(tree->right);
	return (lheight - rheight);
}
