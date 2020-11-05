#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * sorted_array_to_avl - Making a sorted array AVL
 *
 * @array: the array in which the AVL will be made of
 * @size: size of the array
 * Return: Returns the AVL List That is Made
 */
avl_t *sorted_array_to_avl(int *array, size_t size)
{
	int count = 1;

	if (!array)
	{
		return (NULL);
	}
	if (size < 1)
	{
		return (NULL);
	}
	for (; count < (int)size; count++)
	{
		if (array[count] < array[count - 1])
			return (NULL);
	}
	return (Method(array, 0, size - 1, NULL));
}

/**
 * Method - The Method of Constructing the AVL Tree
 *
 * @array: The Array Containing the Number for the AVL
 * @start: starting of the array that will be made for the AVL
 * @end: ending of array that will be made for the AVL
 * @parent: The AVL Parent Implemented to track it
 * Return: Returns the List Before Getting Sorted
 */
avl_t *Method(int *array, int start, int end, avl_t *parent)
{
	avl_t *bst;
	int mid;

	if (start > end)
	{
		return (NULL);
	}
	mid = (start + end) / 2;

	bst = malloc(sizeof(avl_t));
	if (!bst)
	{
		return (NULL);
	}
	bst->n = array[mid];
	bst->parent = parent;
	bst->left = Method(array, start, mid - 1, bst);
	bst->right = Method(array, mid + 1, end, bst);
	return (bst);
}

