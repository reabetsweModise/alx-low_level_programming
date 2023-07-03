#include "lists.h"

/**
 * sum_listint -this fuction  calculates the my_sum of all the data in a
 * listint_t list
 * @head:this paramiter first node in the linked list
 *
 * Return: resulting my_sum
 */
int sum_listint(listint_t *head)
{
	int my_sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		my_sum += temp->n;
		temp = temp->next;
	}

	return (my_sum);
}

