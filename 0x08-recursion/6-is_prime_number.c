#include "main.h"

int my_actual_prime(int n, int i);

/**
 * is_prime_number -is an integer is a prime number or not?
 * @n: number to evalidated
 *
 * Return: 1 if number is a prime , 0 if not a prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * my_actual_prime - checks if a number is prime recursively
 * @n: number to evaluated
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int my_actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

