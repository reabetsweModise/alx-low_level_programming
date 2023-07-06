#include "main.h"

/**
 * get_endianness -this fuction checks if a machine is little or big endian
 * Return: 0 (big), 1 (small)
 */
int get_endianness(void)
{
	unsigned int my_index = 1;
	char *my_char = (char *)&my_index;

	return (*my_char);
}

