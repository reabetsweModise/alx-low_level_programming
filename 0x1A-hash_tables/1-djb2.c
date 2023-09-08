#include "hash_tables.h"

/**
 * hash_djb2 -this Faction convert a str into a hash value.
 * @str: string to convert
 *
 * Return: H (unsigned long int)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int H;
	int x;

	H = 5381;
	while ((x = *str++))
		H = ((H << 5) + H) + x; /* hash * 33 + c */

	return (H);
}
