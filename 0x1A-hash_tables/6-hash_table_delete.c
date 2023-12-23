#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int b;
	hash_node_t *p = NULL;

	if (!ht)
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
