#include "lists.h"

/**
 * dlistint_len -this function returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t* h)
{
	int h;

	h = 0;

	if (h == NULL)
		return (h);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		h++;
		h = h->next;
	}

	return (h);
}
