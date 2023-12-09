#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head pointer to the dlistint_t list
 * @idx: the position to insert the node
 * @n: the interger value for the new node.
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *m = *h, *a;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		m = m->next;
		if (m == NULL)
			return (NULL);
	}
	if (m->next == NULL)
		return (add_dnodeint_end(h, n));

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->prev = m;
	a->next = m->next;
	m->next->prev = a;
	m->next = a;

	return (a);
}
