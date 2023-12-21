#include "hash_tables.h"

/**
 * create_node - a function that creates a new node
 * @key: the key
 * @value: value associated with the key
 *
 * Return: pointer to the new node created
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode;

	newNode = malloc(sizeof(hash_node_t *));
	if (!newNode)
	{
		dprintf(STDERR_FILENO, "malloc failed\n");
		return (0);
	}

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	return (newNode);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to use
 * @key: the key, not an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeed, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);

	current = ht->array[idx];
	/*
	 * check if the key already exists in the linked list at the current
	 * index
	 */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* key already exists, update the value and return */
			free(current->value);
			current->value = strdup(value);
			return (1); /* signifies successful value update */
		}
		current = current->next;
	}

	/* create the newNode */
	newNode = create_node(key, value);

	/* check for collisions and add new node at the beginning of the list */
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;

	return (1); /* signifies element addition to the hash table success */
}
