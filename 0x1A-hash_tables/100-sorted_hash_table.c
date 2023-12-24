#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void create_shash_node(shash_table_t *ht, shash_node_t *node);
void create_shash_order(shash_table_t *ht, shash_node_t *node);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a sorted hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(shash_table_t));
	if (!p)
		return (NULL);

	p->array = calloc(size, sizeof(shash_node_t *));
	if (!p->array)
	{
		free(p);
		return (NULL);
	}
	p->size = size;
	p->shead = NULL;
	p->stail = NULL;
	return (p);
}

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *p;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (0);

	p = malloc(sizeof(shash_node_t));
	if (!p)
		return (0);
	p->key = strdup(key);
	if (!(p->key))
	{
		free(p);
		return (0);
	}
	p->value = strdup(value);
	if (!(p->value))
	{
		free(p->key);
		free(p);
		return (0);
	}
	p->sprev = NULL;
	p->snext = NULL;
	create_shash_node(ht, p);
	return (1);
}

/**
 * create_shash_node - adds the node to the sorted hash table
 * @ht: hash table
 * @node: the node to be added
 */

void create_shash_node(shash_table_t *ht, shash_node_t *node)
{
	unsigned long int b;
	shash_node_t *p = NULL;

	b = key_index((unsigned char *)node->key, ht->size);
	p = ht->array[b];

	if (ht->array[b])
	{
		p = ht->array[b];
		while (p)
		{
			if (strcmp(p->key, node->key) == 0)
				break;
			p = p->next;
		}
		if (p)
		{
			free(p->value);
			p->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
			return;
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
	create_shash_order(ht, node);
}

/**
 * create_shash_order - add the node in sorted position
 * @ht: hash table
 * @node: the node to add
 */

void create_shash_order(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *p = NULL;
	shash_node_t *b = NULL;

	p = ht->shead;
	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(node->key, p->key) <= 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		while (p->snext)
		{
			if (strcmp(node->key, p->key) >= 0)
				p = p->snext;
			else
			{
				b = p;
				p = b->sprev;
				b->sprev = node;
				break;
			}
		}
		node->snext = p->snext;
		p->snext = node;
		node->sprev = p;
		if (!node->snext)
			ht->stail = node;
	}
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int b;
	shash_node_t *p = NULL;

	if (!ht || !ht->array || !key)
		return (NULL);
	b = key_index((unsigned char *)key, ht->size);
	p = ht->array[b];

	while (p)
	{
		if (strcmp(p->key, key) == 0)
			return (p->value);
		p = p->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print the sorted hash table
 * @ht: hash table
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *p = NULL;
	int a = 0;

	if (!ht || !ht->array)
		return;
	p = ht->shead;
	while (p)
	{
		a++;
		p = p->snext;
	}
	p = ht->shead;
	printf("{");
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
		if (p->snext)
			printf(", ");
		p = p->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - reverse order using the sorted linked list
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *p = NULL;
	int a = 0;

	if (!ht || !ht->array)
		return;

	p = ht->stail;
	while (p)
	{
		a++;
		p = p->sprev;
	}
	p = ht->stail;
	printf("{");
	while (p)
	{
		printf("'%s': '%s'", p->key, p->value);
		if (p->sprev)
			printf(", ");
		p = p->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - delele the sorted hash table
 * @ht: the hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int b;
	shash_node_t *p = NULL;

	if (!ht || !ht->array)
		return;

	for (b = 0; b < ht->size; b++)
	{
		if (ht->array[b])
		{
			while (ht->array[b])
			{
				p = ht->array[b]->next;
				free(ht->array[b]->key);
				free(ht->array[b]->value);
				free(ht->array[b]);
				ht->array[b] = p;
			}
			free(ht->array[b]);
		}
	}
	free(ht->array);
	free(ht);
}
