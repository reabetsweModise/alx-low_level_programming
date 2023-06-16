#include <stdlib.h>
#include "main.h"

/**
 * *_memset - Adds the memory with a  byte
 * @s: flied mmemory area 
 * @b: chararector  that is to be  copied
 * @n: n of times to copy b
 * Return: The memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory
 * @nmemb: n of elements in the array
 * @size: the  size of element
 * Return:Allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *P;

	if (nmemb == 0 || size == 0)
		return (NULL);

	P = malloc(size * nmemb);

	if (P == NULL)
		return (NULL);

	_memset(P, 0, nmemb * size);

	return (P);
}

