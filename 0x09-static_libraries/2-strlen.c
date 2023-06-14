#include "main.h"
/**
 * _strlen - length of a str
 * @s: str value
 * Return: length of a str
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}

