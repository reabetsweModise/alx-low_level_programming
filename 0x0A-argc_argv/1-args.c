#include <stdio.h>
#include "main.h"

/**
 * main - Main Fuc print the number of arguments
 * @argc: arguments
 * @argv: array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

