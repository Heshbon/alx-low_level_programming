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
	hash_node_t *p;
	unsigned long int b;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	b = key_index((const unsigned char *)key, ht->size);
	if (b >= ht->size)
		return (NULL);

	p = ht->array[b];
	while (p && strcmp(p->key, key) != 0)
		p = p->next;

	return ((p == NULL) ? NULL : p->value);
}
