#include <stdio.h>
#include "main.h"

/**
 * _atoi - thi Fuc converts a str to an int
 * @str:converted string
 * Return: converted in from str
 */
int _atoi(char *str)
{
	int index, digitCount, number, length, isNegative, currentDigit;

	index = 0;
	digitCount = 0;
	number = 0;
	length = 0;
	isNegative = 0;
	currentDigit = 0;

	while (str[length] != '\0')
		length++;

	while (index < length && isNegative == 0)
	{
		if (str[index] == '-')
			++digitCount;

		if (str[index] >= '0' && str[index] <= '9')
		{
			currentDigit = str[index] - '0';
			if (digitCount % 2)
				currentDigit = -currentDigit;
			number = number * 10 + currentDigit;
			isNegative = 1;
			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;
			isNegative = 0;
		}
		index++;
	}

	if (isNegative == 0)
		return (0);

	return (number);
}
/**
 * main - this Fuc multiplies  numbers
 * @argc: number
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}






















