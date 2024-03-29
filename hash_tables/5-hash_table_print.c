#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: prints hash table otherwise nothing if ht is NULL
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char c = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (c == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			c = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
