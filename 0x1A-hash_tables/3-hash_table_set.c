#include "hash_tables.h"

/**
 * hash_table_set - function to add an element to a hash table
 * @ht: hash table
 * @key: key in key:value pair
 * @value: value in key:value pair
 *
 * Return: 1 (Success), 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	if (new_node == NULL)
		return (-1);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL
		|| (value != NULL
		&& new_node->value == NULL))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
