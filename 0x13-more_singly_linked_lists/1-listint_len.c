#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: the head of the linked list
 * Return: the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	size_t a;

	for (p = h, a = 0; p != NULL; a++, p = p->next)
		;
	return (a);
}
