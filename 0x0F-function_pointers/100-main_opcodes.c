#include <stdio.h>
#include <stdlib.h>

/**
 * main - this Fuc prints its own opcodes
 * @argc: number
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, j;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

		str = (char *)main;

	for (j = 0; j < b; j++)
	{
		if (j == b - 1)
		{
			printf("%02hhx\n", str[j]);
			break;
		}
	printf("%02hhx ", str[j]);
	}
	return (0);
}

