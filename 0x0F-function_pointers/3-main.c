#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - this Main Fuc Prints the result
 * @argc: arguments supplied to the program.
 * @argv: array of pointers
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int input1, input2;
	char *str1;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input1 = atoi(argv[1]);
	str1 = argv[2];
	input2 = atoi(argv[3]);

	if (get_op_func(str1) == NULL || str1[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*str1 == '/' && input2 == 0) ||
	(*str1 == '%' && input2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(str1)(input1, input2));

	return (0);
}
