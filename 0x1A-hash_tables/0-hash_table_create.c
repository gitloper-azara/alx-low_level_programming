#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table, or NULL if something goes
 * wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int idx;

	/* handle a 0 size case */
	if (size < 1)
		return (NULL);

	/* perform memory allocations for the array of linked lists */
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
	{
		dprintf(STDERR_FILENO, "malloc failed\n");
		return (NULL);
	}

	ht->size = size;

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (!ht->array)
	{
		dprintf(STDERR_FILENO, "malloc failed\n");
		free(ht);
		return (NULL);
	}

	/* initialise each element of the array to NULL */
	for (idx = 0; idx < size; idx++)
		ht->array[idx] = NULL;

	return (ht);
}
