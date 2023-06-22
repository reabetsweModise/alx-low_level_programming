#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list L;
	int index = 0;
	char *string, *pointer = "";

	va_start(L, format);

	if (format)
	{
		while (format[index])
		{
			switch (format[index])
			{
				case 'c':
					printf("%s%c", pointer, va_arg(L, int));
					break;
				case 'i':
					printf("%s%d", pointer, va_arg(L, int));
					break;
				case 'f':
					printf("%s%f", pointer, va_arg(L, double));
					break;
				case 's':
					string = va_arg(L, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", pointer, string);
					break;
				default:
					index++;
					continue;
			}
			pointer = ", ";
			index++;
		}
	}

	printf("\n");
	va_end(L);
}

