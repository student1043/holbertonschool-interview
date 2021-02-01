#include "search_algos.h"

/**
  * advanced_recursive_binary - recursive
  * @array: array
  * @left: size
  * @right: size
  * @value: value
  * Return: index
  */
int advanced_recursive_binary(int *array, size_t left, size_t right, int value)
{
size_t l;
if (right < left)
{
return (-1);
}
printf("Searching in array: ");
for (l = left; l < right; l++)
{
printf("%d, ", array[l]);
}
printf("%d\n", array[l]);
l = left + (right - left) / 2;
if (array[l] == value && (l == left || array[l - 1] != value))
{
return (l);
}
if (array[l] >= value)
{
return (advanced_recursive_binary(array, left, l, value));
}
return (advanced_recursive_binary(array, l + 1, right, value));
}

/**
 * advanced_binary - advanced binary search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int advanced_binary(int *array, size_t size, int value)
{
if (!array || size == 0)
return (-1);

return (advanced_recursive_binary(array, 0, size - 1, value));
}
