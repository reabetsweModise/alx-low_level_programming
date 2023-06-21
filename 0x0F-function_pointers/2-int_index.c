#include "function_pointers.h"
/**
 * int_index - this function  return index place if comparison
 * @array: this is  an array
 * @size: Elements in array
 * @cmp: pointer
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}

