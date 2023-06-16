#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b:the  number of bytes to allocated in the memory
 *
 * Return: pointer allocated to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *P;

	P = malloc(b);

	if (P == NULL)
		exit(98);

	return (P);
}

