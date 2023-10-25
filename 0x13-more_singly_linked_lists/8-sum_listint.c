#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data n
 * @head: the pointer to the head
 * Return: the sum of all the data n
 */

int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum;

	for (sum = 0, p = head; p != NULL; p = p->next)
		sum += p->n;

	return (sum);
}
