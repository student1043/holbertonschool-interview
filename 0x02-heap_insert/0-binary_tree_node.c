#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @parent: parent node
 * @value: value of the node
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *prt;
prt = malloc(sizeof(binary_tree_t));
if (prt)
{
prt->parent = parent;
prt->n = value;
prt->right = NULL;
prt->left = NULL;
}
else
{
return (NULL);
}
return (prt);
}
