#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint_end  - function that adds a new node
 * at the end of a listint_t list
 * @head: the double pointer to the head node
 * @n: the interger value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *a;

	p = *head;
	while (p && p->next != NULL)
		p = p->next;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->next = NULL;

	if (p)
		p->next = a;
	else
		*head = a;
	return (a);
}
