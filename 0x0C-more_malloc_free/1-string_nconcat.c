#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - links number bytes of a string to another string
 * @s1: String 1
 * @s2: string to link from
 * @n: n bytes from s2 to link to s1
 * Return: resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *P;
	unsigned int k = 0, l = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		P = malloc(sizeof(char) * (x + n + 1));
	else
		P = malloc(sizeof(char) * (x + y + 1));

	if (!P)
		return (NULL);

	while (k < x)
	{
		P[k] = s1[k];
		k++;
	}

	while (n < y && k < (x + n))
		P[k++] = s2[l++];

	while (n >= y && k < (x + y))
		P[k++] = s2[l++];

	P[k] = '\0';

	return (P);
}

