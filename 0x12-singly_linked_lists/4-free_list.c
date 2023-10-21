#include "lists.h"

#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: the head node of the list
 */

void free_list(list_t *head)
{
	list_t *p;
	list_t *n;

	p = head;

	while (p != NULL)
	{
		n = p->next;
		free(p->str);
		free(p);
		p = n;
	}
}
