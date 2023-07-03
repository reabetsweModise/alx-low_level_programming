#include "lists.h"

/**
 * free_listint_safe -this fuction frees a linked list
 * @h:this parameter pointer to the first node in the linked list
 *
 * Return:elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t my_len = 0;
	int my_difference;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		my_difference = *h - (*h)->next;
		if (my_difference > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			my_len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			my_len++;
			break;
		}
	}

	*h = NULL;

	return (my_len);
}

