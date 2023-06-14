#include "main.h"
/**
 * _strncpy - Copy the valur of a string
 * @dest: input value of dest
 * @src: input value pf src
 * @n: input value of the number
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}

