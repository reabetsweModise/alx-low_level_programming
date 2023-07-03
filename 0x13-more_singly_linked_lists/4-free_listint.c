#include "lists.h"

/**
 * free_listint -  thid fuction frees a linked list
 * @head:this parametor  list to be freed
 * return : void
 */
void free_listint(listint_t *head)
{
	listint_t *my_temp;

	while (head)
	{
		my_temp = head->next;
		free(head);
		head = my_temp;
	}
}
