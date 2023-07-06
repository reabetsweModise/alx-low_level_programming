#include <stdio.h>
#include "main.h"

/**
 * main - main Fuction Prints program names
 * @argc: n of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

