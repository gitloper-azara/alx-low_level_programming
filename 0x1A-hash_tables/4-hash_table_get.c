#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: key to look for
 *
 * Return: value associated with the element, or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (!(ht->array[idx]))
		return (NULL);
	current = ht->array[idx];

	/* now traverse the linked list at the computed index */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	/* if key could not be found... */
	return (NULL);
}
