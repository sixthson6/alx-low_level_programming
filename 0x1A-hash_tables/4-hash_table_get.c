#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value given the key
 * @ht: hash table
 * @key: key
 *
 * Return: value to key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i = 0;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return NULL;

	index = key_index((const unsigned char *)key, ht->size);
	while (i < ht->size)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
		node = node->next;
		}
		i++;
	}
	return (NULL);
}
