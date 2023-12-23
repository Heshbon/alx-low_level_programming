#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b;
	int a = 0;
	hash_node_t *p = NULL;

	if (!ht)
		return;

	for (b = 0; b < ht->size; b++)
	{
		p = ht->array[b];
		if (p)
		{
			while (p)
			{
				a++;
				p = p->next;
			}
		}
	}
	printf("{");
	for (b = 0; b < ht->size; b++)
	{
		p = ht->array[b];
		if (p)
		{
			while (p)
			{
				printf("'%s': '%s'", p->key, p->value);
				if (--a)
					printf(", ");
				p = p->next;
			}
		}
	}
	printf("}\n");
}
