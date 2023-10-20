#include "lists.h"

#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t
 * @str: the string value
 * @head: the head of the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	unsigned int a, b = 0;

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);
	p->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		b++;
	p->len = b;
	p->next = *head;
	*head = p;

	return (p);
}
