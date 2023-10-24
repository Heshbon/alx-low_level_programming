#include "lists.h"

#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: the double pointer to the head of linked list
 * Return: the head node’s data n
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *p;

	if (*head == NULL)
		return (0);

	p = *head;
	a = p->n;
	*head = p->next;
	free(p);

	return (a);
}
