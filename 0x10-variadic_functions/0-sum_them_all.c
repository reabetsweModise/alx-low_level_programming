#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its paramters.
 * @n: The number of paramters
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0. or  sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int j, s = 0;

	va_start(a, n);

	for (j = 0; j < n; j++)
		s += va_arg(a, int);

	va_end(a);

	return (s);
}

