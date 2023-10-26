#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: the double pointer to the head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *b;
	listint_t *p;

	if (*head == NULL)
		return (NULL);

	p = *head;
	*head = p->next;
	b = (*head)->next;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	while (b != NULL)
	{
		(*head)->next = p;
		p = *head;
		*head = b;
		b = (*head)->next;
	}
	(*head)->next = p;
	return (*head);
}
