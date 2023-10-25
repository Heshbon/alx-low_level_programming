#include "lists.h"

#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: the double pointer to the head
 * @idx: list where the new node should be added,starts at 0
 * @n: the interger value
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *b;
	unsigned int a;

	if (head == NULL)
		return (NULL);

	p = *head;
	for (a = 1; p && a < idx; a++)
	{
		p = p->next;
		if (p == NULL)
			return (NULL);
	}

	b = malloc(sizeof(listint_t));
	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	b->n = n;

	if (idx == 0)
	{
		*head = b;
		b->next = p;
	}
	else if (p->next)
	{
		b->next = p->next;
		p->next = b;
	}
	else
	{
		b->next = NULL;
		p->next = b;
	}

	return (b);
}
