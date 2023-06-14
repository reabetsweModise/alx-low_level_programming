#include "main.h"

/**
 * _isalpha - Check for alphabets
 * @c: the character c
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

