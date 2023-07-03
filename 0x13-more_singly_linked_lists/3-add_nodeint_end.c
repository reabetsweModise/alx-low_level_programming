#include "lists.h"

/**
 * add_nodeint_end - this fuction  adds a node at the end of a linked list
 * @head:this  pointer to the first element in the list
 * @n:this paramiter data to insert in the my_new element
 *
 * Return: pointer to the my_new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *my_new;
	listint_t *my_temp = *head;

	my_new = malloc(sizeof(listint_t));
	if (!my_new)
		return (NULL);

	my_new->n = n;
	my_new->next = NULL;

	if (*head == NULL)
	{
		*head = my_new;
		return (my_new);
	}

	while (my_temp->next)
		my_temp = my_temp->next;

	my_temp->next = my_new;

	return (my_new);
}

