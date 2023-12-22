#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * Otherwise NULL if an error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;

	p = malloc(sizeof(hash_table_t));
	if (!p)
		return (NULL);

	p->array = calloc(size, sizeof(hash_node_t *));
	if (!p)
	{
		free(p);
		return (NULL);
	}
	p->size = size;
	return (p);
}
