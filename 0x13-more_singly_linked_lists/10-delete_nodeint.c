#include "lists.h"

/**
 * delete_nodeint_at_index - this fuction deletes a node in a linked list at
 * a certain index
 * @head: this parametor pointer to the first element in the list
 * @index:this is an index of the node to delete
 *
 * Return: 1 , or -1 (errow)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *my_current = NULL;
	unsigned int my_index = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (my_index < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		my_index++;
	}


	my_current = temp->next;
	temp->next = my_current->next;
	free(my_current);

	return (1);
}

