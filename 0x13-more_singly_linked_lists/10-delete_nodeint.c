#include "lists.h"

#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * of listint_t
 * @head: the double pointer to the head
 * @index: the index of the node to be deleted,starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p;
	listint_t *b;
	unsigned int a;

	a = 0;
	p = *head;
	if (*head == NULL)
		return (-1);

	while (a < index)
	{
		a++;
		b = p;
		if (p->next)
			p = p->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = p->next;
	else if (p->next)
		b->next = p->next;
	else
		b->next = NULL;
	free(p);
	return (1);
}
