#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len -this fuction Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: this paremeter pointer to the head of the listint_t to check.
 *
 * Return: 0.Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tor,  *my_hare;
	size_t my_nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tor = head->next;
	my_hare = (head->next)->next;

	while (my_hare)
	{
		if (tor == my_hare)
		{
			tor = head;
			while (tor != my_hare)
			{
				my_nod++;
				tor = tor->next;
				my_hare = my_hare->next;
			}

			tor = tor->next;
			while (tor != my_hare)
			{
				my_nod++;
				tor = tor->next;
			}

			return (my_nod);
		}

		tor = tor->next;
		my_hare = (my_hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe -this fuction Prints a listint_t list safely.
 * @head:this parameter pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nod, my_index = 0;

	nod = looped_listint_len(head);

	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (my_index = 0; my_index < nod; my_index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nod);
}

