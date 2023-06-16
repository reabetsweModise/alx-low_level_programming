#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"
/**
 * is_digit- comfirms if a str contains a non-digit char
 * @s: evaluats the string
 *
 * Return: 0 if a non-digit, 1 otherwise
 *
 */

int is_digit(char *s)
{
	int k = 0;

	while (s[k])
	{
		if (s[k] < '0' || s[k] > '9')
			return (0);
		k++;
	}
	return (1);
}

/**
 * _strlen - Length of a str
 * @s:the  string to evaluated
 * Return: string length
 */
int _strlen(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}
/**
 * errors - checks for erroes on main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - Product of  two numbers
 * @argc: number
 * @argv: array
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *myFirstString, *mySecondString;
	int Temp1, Temp2, Temp0, o, store, num1, num2, *my_results, x = 0;

	myFirstString = argv[1], mySecondString = argv[2];
	if (argc != 3 || !is_digit(myFirstString) || !is_digit(mySecondString))
		errors();
	Temp1 = _strlen(myFirstString);
	Temp2 = _strlen(mySecondString);
	Temp0 = Temp1 + Temp2 + 1;
	my_results = malloc(sizeof(int) * Temp0);
	if (!my_results)
		return (1);
	for (o = 0; o <= Temp1 + Temp2; o++)
		my_results[o] = 0;
	for (Temp1 = Temp1 - 1; Temp1 >= 0; Temp1--)
	{
		num1 = myFirstString[Temp1] - '0';
		store = 0;
		for (Temp2 = _strlen(mySecondString) - 1; Temp2 >= 0; Temp2--)
		{
			num2 = mySecondString[Temp2] - '0';
			store += my_results[Temp1 + Temp2 + 1] + (num1 * num2);
			my_results[Temp1 + Temp2 + 1] = store % 10;
			store /= 10;
		}
		if (store > 0)
			my_results[Temp1 + Temp2 + 1] += store;
	}
	for (o = 0; o < Temp0 - 1; o++)
	{
		if (my_results[o])
			x = 1;
		if (x)
			_putchar(my_results[o] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(my_results);
	return (0);
}




