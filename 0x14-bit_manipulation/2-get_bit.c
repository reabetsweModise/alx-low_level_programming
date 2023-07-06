#include "main.h"

/**
 * get_bit - this fuction returns a bit at an index in a decimal number
 * @n:parameter number to search
 * @index: index of the bit
 *
 * Return:the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int my_bit_val;

	if (index > 63)
		return (-1);

	my_bit_val = (n >> index) & 1;

	return (my_bit_val);
}

