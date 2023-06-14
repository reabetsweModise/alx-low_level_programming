#include "main.h"
/**
 *_memcpy - its function that copies memory area
 *@dest:  stored memory
 *@src:  copied memory
 *@n: number bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;

	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

