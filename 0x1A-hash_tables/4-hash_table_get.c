#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key
 * Return:  value associated with the element, or
 * NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int b;
	hash_node_t *p = NULL;

	if (!ht || !key)
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
