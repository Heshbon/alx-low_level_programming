#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: the head of the linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t a;

	for (p = h, a = 0; p != NULL; a++, p = p->next)
		printf("%d\n", p->n);
	return (a);
}
