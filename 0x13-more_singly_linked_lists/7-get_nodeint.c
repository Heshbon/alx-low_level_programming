#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list
 * @head: the pointer to the head
 * @index: the index of the node starting at 0
 * Return: nth node or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int a;

	p = head;
	a = 0;
	while (a < index)
	{
		if (p)
			p = p->next;
		else
			return (NULL);
		a++;
	}
	if (p)
		return (p);

	else
		return (NULL);
}
