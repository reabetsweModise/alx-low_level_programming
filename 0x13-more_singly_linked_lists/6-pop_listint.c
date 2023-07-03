#include "lists.h"

/**
 * pop_listint -this fuction  deletes the head node of a linked list
 * @head:first element in the linked list
 *
 * Return: elements that was deleted (succes),or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *my_temp;
	int my_number;

	if (!head || !*head)
		return (0);

	my_number = (*head)->n;
	my_temp = (*head)->next;
	free(*head);
	*head = my_temp;

	return (my_number);
}


