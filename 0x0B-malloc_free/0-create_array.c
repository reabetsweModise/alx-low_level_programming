#include "main.h"
#include <stdlib.h>
/**
 * create_array - an anrray of charector c is created
 * @size: array size
 * @c: charectore is  assigned
 *
 * Return:  array pointer , NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}

