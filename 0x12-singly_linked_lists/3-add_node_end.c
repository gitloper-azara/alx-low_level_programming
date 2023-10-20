#include "lists.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */

int _strlen(const char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * add_node_end - a function that adds a new node to the end of a list_t list.
 * @head: pointer to head node.
 * @str: string to use.
 *
 * Return: the addres of the new element, or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addNew, *temp;

	/* dynamically allocate memory to addNew */
	addNew = malloc(sizeof(list_t));

	/* handle memory allocation failure */
	if (addNew == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	/* handle string duplication */
	addNew->str = strdup(str);
	if (addNew->str == NULL)
	{
		free(addNew);
		return (NULL);
	}
	/* calc length of string */
	addNew->len = _strlen(str);
	/* indicate the end of the linked list (NULL ADDRESS) */
	addNew->next = NULL;
	if (*head == NULL)
	{
		*head = addNew;
		return (addNew);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = addNew;
	return (addNew);
}
