#include "hash_tables.h"

/**
 * hash_table_print -this Fuction  print out the hash table.
 * @ht: hash table to read from.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int I, k;
	hash_node_t *node;

	I = k = 0;
	if (!ht)
		return;
	printf("{");
	while (I < ht->size)
	{
		node = ht->array[I];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);

			if (node->next)
				printf(", ");
			node = node->next;
		}

		while (!(ht->array[I + 1]))
			I++;

		if (k && I < ht->size)
			printf(", ");
		else
			k = 1;
		I++;
	}
	printf("}\n");
}
