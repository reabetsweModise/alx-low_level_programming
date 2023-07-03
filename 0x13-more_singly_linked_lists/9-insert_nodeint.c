#include "lists.h"

/**
 * insert_nodeint_at_index - this fuction inserts a new node in a linked list,
 * at a given position
 * @head: this parameter pointer to the first node in the list
 * @idx: this index where the new node is added
 * @n:this n  data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int my_index;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (my_index = 0; temp && my_index < idx; my_index++)
	{
		if (my_index == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

