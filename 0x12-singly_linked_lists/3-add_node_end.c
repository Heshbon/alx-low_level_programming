#include "lists.h"

#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: the head of the node
 * @str: the string value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *n;
	unsigned int a, b = 0;

	p= malloc (sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		b++;
	p->next = NULL;
	p->len = b;
	n = *head;

	if (n == NULL)
		*head = p;
	else
	{
		while (n->next != NULL)
			n = n->next;
		n->next = p;
	}
	return (*head);
}
