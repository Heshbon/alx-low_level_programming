#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the pointer head to the dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
