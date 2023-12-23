#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *p;

	if (!ht || !key)
		return (0);

	p = malloc(sizeof(hash_node_t));
	if (!p)
		return (0);

	p->key = strdup(key);
	if (!(p->key))
	{
		free(p);
		return (0);
	}
	p->value = strdup(value);
	if (!(p->key))
	{
		free(p);
		free(p->key);
		return (0);
	}
	create_node(ht, p);
	return (1);
}

/**
 * create_node - creates the new hash node
 * @ht: hash table
 * @node: node to add
 */

void create_node(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int b;
	hash_node_t *c = NULL;

	b = key_index((unsigned char *)node->key, ht->size);
	c = ht->array[b];

	if (ht->array[b])
	{
		c = ht->array[b];
		while (c)
		{
			if (strcmp(c->key, node->key) == 0)
				break;
			c = c->next;
		}
		if (c)
		{
			free(c->value);
			c->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
		else
		{
			node->next = ht->array[b];
			ht->array[b] = node;
		}
	}
	else
	{
		node->next = NULL;
		ht->array[b] = node;
	}
}
