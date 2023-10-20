#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t
 * @h: the linked list value
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
