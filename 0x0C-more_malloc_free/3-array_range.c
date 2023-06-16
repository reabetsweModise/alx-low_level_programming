#include <stdlib.h>
#include "main.h"
/**
 * *array_range - produces an array of integers
 * @min:lowest value in the range of stored values
 * @max: highest value in the range of stored values and the number of elements
 * Return:a pointer to the newly created array
 *
 */
int *array_range(int min, int max)
{
	int *my_pointer;
	int m, my_Size;

	if (min > max)
		return (NULL);

	my_Size = max - min + 1;

	my_pointer = malloc(sizeof(int) * my_Size);

	if (my_pointer == NULL)
		return (NULL);

	for (m = 0; min <= max; m++)
		my_pointer[m] = min++;

	return (my_pointer);
}
