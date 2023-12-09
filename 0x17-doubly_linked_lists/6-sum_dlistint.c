#include "lists.h"

/**
 * sum_dlistint - the sum of all the data (n) of a dlistint_t linked list
 * @head: the head pointer
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
