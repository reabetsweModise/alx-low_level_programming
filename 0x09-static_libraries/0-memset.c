#include "main.h"
/**
 * _memset - Its fill a block of memory
 * @s: first address of memory
 * @b: out come value
 * @n: number of bytes
 *
 * Return: New  array with  value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}

