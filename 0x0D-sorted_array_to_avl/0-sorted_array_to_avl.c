#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * sorted_array_to_avl - Entry point
 * @array: the array
 * @size: size of the array
 * Return: 0 on success, error code on failure
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{

}


/**
 * Method - Entry point
 * @array: the array
 * @size: size of the array
 * @parent: AVL Parent
 * Return: 0 on success, error code on failure
 */
avl_t *Method(int *array, int start, int end, avl_t *parent)
{
if(start > end)
{
return(NULL);
}
int mid = (start + end) / 2;
avl_t *bst;
bst = malloc(sizeof(avl_t));
if (!bst)
{
return (NULL);
}
bst->n = array[mid];
bst->parent = parent;
bst->left = Method(array, start, mid-1, bst);
bst->right = Method(array, mid + 1, end, bst);
return(bst);
}