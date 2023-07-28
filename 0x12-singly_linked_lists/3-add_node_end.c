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
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of list_t list
 * @str: string
 * Return: number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new, *temp;

	/* dynamically allocate memory to add_new */
	add_new = malloc(sizeof(list_t));

	/* handle failure */
	if (add_new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	add_new->str = strdup(str);
	if (add_new->str == NULL)
	{
		free(add_new);
		return (NULL);
	}
	add_new->len = _strlen(str);
	add_new->next = NULL;
	if (*head == NULL)
	{
		*head = add_new;
		return (add_new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = add_new;

	return (add_new);
}
