#include "main.h"

/**
 * print_binary -this fuction prints the binary equivalent of a decimal number
 * @n:this parametor is binary
 */
void print_binary(unsigned long int n)
{
	int my_index, my_count = 0;
	unsigned long int my_current;

	for (my_index = 63; my_index >= 0; my_index--)
	{
		my_current = n >> my_index;

		if (my_current & 1)
		{
			_putchar('1');
			my_count++;
		}
		else if (my_count)
			_putchar('0');
	}
	if (!my_count)
		_putchar('0');
}

