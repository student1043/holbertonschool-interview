#include <stdlib.h>

#include <stdio.h>

#include "binary_trees.h"

/**
 * sorted_array_to_avl - Entry point
 * @array: the array
 * @size: size of the array
 * Return: 0 on success, error code on failure
 */
avl_t * sorted_array_to_avl(int * array, size_t size) {
    int count;
    if (!array || size < 1)
        return (NULL);
    for (count = 1; count < (int) size; count++) {
        if (array[count] < array[count - 1])
            return (NULL);
    }
    return (Method(array, 0, size - 1, NULL));
}

/**
 * Method - Entry point
 * @array: the array
 * @start: start of the array
 * @end: end of array
 * @parent: AVL Parent
 * Return: 0 on success, error code on failure
 */
avl_t * Method(int * array, int start, int end, avl_t * parent) {
    if (start > end) {
        return (NULL);
    }
    int mid = (start + end) / 2;
    avl_t * bst;
    bst = malloc(sizeof(avl_t));
    if (!bst) {
        return (NULL);
    }
    bst -> n = array[mid];
    bst -> parent = parent;
    bst -> left = Method(array, start, mid - 1, bst);
    bst -> right = Method(array, mid + 1, end, bst);
    return (bst);
}