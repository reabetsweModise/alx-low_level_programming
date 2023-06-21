#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - s Fuction print name using pointer
 * @name: string (name)
 * @f: function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

