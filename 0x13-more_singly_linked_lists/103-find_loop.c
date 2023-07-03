#include "lists.h"

/**
 * find_listint_loop -this fuction finds the loop in a linked list
 * @head:this parametor linked list to search for
 *
 * Return: *node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *S = head;
	listint_t *F = head;

	if (!head)
		return (NULL);

	while (S && F && F->next)
	{
		F = F->next->next;
		S = S->next;
		if (F == S)
		{
			S = head;
			while (S != F)
			{
				S = S->next;
				F = F->next;
			}
			return (F);
		}
	}

	return (NULL);
}

