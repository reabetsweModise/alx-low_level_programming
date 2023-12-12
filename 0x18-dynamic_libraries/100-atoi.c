#include "main.h"

/**
 * _atoi -this  Function converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int j, k, l, man, x, D;

	j = 0;
	k = 0;
	l = 0;
	man = 0;
	x = 0;
	D = 0;

	while (s[man] != '\0')
		man++;

	while (j < man && x == 0)
	{
		if (s[j] == '-')
			++k;

		if (s[j] >= '0' && s[j] <= '9')
		{
			D = s[j] - '0';
			if (k % 2)
				D = -D;
			l = l * 10 + D;
			x = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			x = 0;
		}
		j++;
	}

	if (x == 0)
		return (0);

	return (l);
}

