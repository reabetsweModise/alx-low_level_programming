#include "main.h"

/**
 * factorial - Returns  factorial of a n
 * @n: return the factorial from
 * Return: Factorial of number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
