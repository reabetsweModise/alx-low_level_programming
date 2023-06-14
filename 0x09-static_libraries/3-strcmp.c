#include "main.h"
/**
 * _strcmp - copares string s1 and s2
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	m++;
	}
	return (0);
}

