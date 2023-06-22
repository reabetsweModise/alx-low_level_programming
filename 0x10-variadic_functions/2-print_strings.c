#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - this Fuction Prints string
 * @separator:string to be printed
 * @n: The number of strings
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list String;
	char *str;
	unsigned int k;

	va_start(String, n);

	for (k = 0; k < n; k++)
	{
		str = va_arg(String, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (k != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(String);
}

