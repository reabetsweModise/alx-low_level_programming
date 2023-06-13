#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  input is added together for size
 * @s1: first input
 * @s2:second input
 * Return:S1 and S2 concat
 */
char *str_concat(char *s1, char *s2)
{
	char *C;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (i + j + 1));

	if (C == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		C[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		C[i] = s2[j];
		i++, j++;
	}
	C[i] = '\0';
	return (C);
}

