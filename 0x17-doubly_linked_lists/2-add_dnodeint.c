#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the pointer head of the dlistint_t list
 * @n: interger value for the node to contain
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;
	a->prev = NULL;
	a->next = *head;
	if (*head != NULL)
		(*head)->prev = a;
	*head = a;

	return (a);
}
