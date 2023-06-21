#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this Fuction prints  array on a new Line
 * @array: its array
 * @size: Size elem to print
 * @action: Pointer to print in regular or hex
 * Return: Nothing (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}

