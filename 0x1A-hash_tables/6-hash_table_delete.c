#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current, *temp;

	if (!ht)
		return; /* nothing to delete */

	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		/* free memory for each node in the linked list at current */
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	/* free the memory for the array and the hash table itself */
	free(ht->array);
	free(ht);
}
