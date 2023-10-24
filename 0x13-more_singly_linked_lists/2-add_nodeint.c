#include "lists.h"

#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning of
 * a listint_t list
 * @head: the double pointer to the end
 * @n: the interger value
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *a;

	p = *head;
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	*head = a;

	if (p == NULL)
		a->next = NULL;
	else
		a->next = p;

	return (a);
}
