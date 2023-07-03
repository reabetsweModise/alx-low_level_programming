#include "lists.h"

/**
 * get_nodeint_at_index - this fuction returns the node at a certain index
 * in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int my_index = 0;
	listint_t *temp = head;

	while (temp && my_index < index)
	{
		temp = temp->next;
		my_index++;
	}

	return (temp ? temp : NULL);
}

