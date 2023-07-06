#include "main.h"

/**
 * binary_to_uint -this fuction  converts a binary number to unsigned int
 * @b:this paramiter string containing the binary number
 *
 * Return:number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int my_dec_val = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		my_dec_val = 2 * my_dec_val + (b[index] - '0');
	}

	return (my_dec_val);
}
