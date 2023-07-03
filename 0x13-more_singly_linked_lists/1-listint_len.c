#include "lists.h"

/**
 * listint_len - this funtion returns the number of elements
 * @h: this paremitor linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t my_number = 0;

	while (h)
	{
		my_number++;
		h = h->next;
	}

	return (my_number);
}

