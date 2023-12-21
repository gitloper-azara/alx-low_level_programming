#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current;
	int comma;

	if (!ht)
		return; /* print nothing */

	printf("{");
	comma = 0; /* track placement of comma and space */

	/* iterate through each index in the hash table */
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		/*
		 * iterate through each node in the linked list at the current
		 * index, and print each key and value
		 */
		while (current)
		{
			/* print comma, space between key-value pair */
			if (comma)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);

			/* set comma to true for subsequent iteration */
			comma = 1;

			current = current->next;
		}
	}

	printf("}\n");
}
