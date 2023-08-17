#include "lists.h"

/**
 * dlistint_len - this Fuction returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t* h)
{
	int k;

	k = 0;

	if (h == NULL)
		return (k);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}

	return (k);
}
