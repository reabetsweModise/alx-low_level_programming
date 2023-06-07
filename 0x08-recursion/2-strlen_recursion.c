#include "main.h"
/**
 * _strlen_recursion - the length of a string.
 * @s:The string is  measured.
 * Return:length of a string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}

