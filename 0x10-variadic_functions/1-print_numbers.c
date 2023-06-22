#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -this fuction Prints numbers
 * @separator: string to be printed between num.
 * @n:n of integers passed
 * @...: A variable number
 * Returns : void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int j;

	va_start(nu, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(nu, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(j);
}

