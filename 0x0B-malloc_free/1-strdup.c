#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate  memory location
 * @str: char pointer
 * Return: 0
 */
char *_strdup(char *str)
{
	char *A;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (A == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		A[j] = str[j];

	return (A);
}

