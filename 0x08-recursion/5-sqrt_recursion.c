#include "main.h"

int my_actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root
 * @n:to calculate the square root
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (my_actual_sqrt_recursion(n, 0));
}

/**
 * my_actual_sqrt_recursion -find the natural square root
 * @n:calculate the sqaure root
 * @i:Iterator
 *
 * Return: square root
 */
int my_actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (my_actual_sqrt_recursion(n, i + 1));
}

