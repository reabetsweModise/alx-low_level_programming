#include "main.h"

/**
 * flip_bits - this fuction  counts the number of bits to change
 * @n:the first parameter number
 * @m:the second parameter number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, my_count = 0;
	unsigned long int my_current;
	unsigned long int my_exclusive = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		my_current = my_exclusive >> index;
		if (my_current & 1)
			my_count++;
	}

	return (my_count);
}

