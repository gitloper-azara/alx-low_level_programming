#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string to count
 *
 * Return: Length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - function that adds a new node at the beginning of
 * a list_t list
 * @head: head of list_t list
 * @str: string
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new;

	/* dynamically allocate memory to add_new */
	add_new = malloc(sizeof(list_t));

	/* handle failure */
	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->str = strdup(str);
	add_new->len = _strlen(str);
	add_new->next = *head;

	*head = add_new;

	return (add_new);
}
