#include "hash_tables.h"

/**
 * hash_table_delete - del hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *nd, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nd = ht->array[i];
			while (nd != NULL)
			{
				tmp = nd->next;
				free(nd->key);
				free(nd->value);
				free(nd);
				nd = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
