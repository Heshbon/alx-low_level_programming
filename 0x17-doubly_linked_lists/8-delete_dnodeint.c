#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index
 * index of a dlistint_t linked list
 * @head: the head pointer to the dlistint_t list
 * @index: the index value
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *m = *head;
	unsigned int a;

	if (!head || !(*head))
		return (-1);

	for (a = 0; a < index; a++)
	{
		m = m->next;
		if (m == NULL)
			return (-1);
	}
	if (index == 0)
	{
		if (m->next)
			m->next->prev = NULL;
		*head = m->next;
	}
	else
	{
		if (m->next)
			m->next->prev = m->prev;
		if (m->prev)
			m->prev->next = m->next;
	}
	free(m);
	return (1);

}
