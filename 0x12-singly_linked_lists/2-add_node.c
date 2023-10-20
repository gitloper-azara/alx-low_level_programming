#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */

int _strlen(char const *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * add_node - a function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the head node.
 * @str: string to use.
 *
 * Return: the address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addNew;

	/* dynamically allocate memory to addNew */
	addNew = malloc(sizeof(list_t));

	/* handle memory allocation failure */
	if (addNew == NULL)
		return (NULL);

	/* handle the addition of the new node */
	addNew->str = strdup(str);
	addNew->len = _strlen(str);
	addNew->next = *head;

	*head = addNew;
	return (addNew);
}
