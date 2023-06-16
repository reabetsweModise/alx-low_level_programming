#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - dynamically reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory block
 * @old_size: size of the previously allocated memory block
 * @new_size: new size of the memory block to be reallocated
 *
 * Return: pointer to the newly allocated memory block
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *my_FirstPointer;
	char *my_oldPointer;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	my_FirstPointer = malloc(new_size);
	if (!my_FirstPointer)
		return (NULL);

	my_oldPointer = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			my_FirstPointer[k] = my_oldPointer[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			my_FirstPointer[k] = my_oldPointer[k];
	}

	free(ptr);
	return (my_FirstPointer);
}

