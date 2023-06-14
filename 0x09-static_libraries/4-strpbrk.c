#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input s
 * @accept: input accept
 * Return: Pointer to the first occurrence of any
 * character from accept in s, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}

	return ('\0');
}
