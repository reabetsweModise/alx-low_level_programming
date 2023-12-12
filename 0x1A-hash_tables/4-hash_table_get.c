#include "hash_tables.h"

/**
 * hash_table_get -this Fuction  returns that value of the key
 * @ht: hash table to search in.
 * @key: key to find
 *
 * Return: Value at the key location
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int I;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	I = key_index((unsigned char *)key, ht->size);
	node = ht->array[I];

	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
