#include "lists.h"

#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: the head of the linked list
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
