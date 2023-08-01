#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: value to be assigned to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare a new_node pointer */
	listint_t *new_node;

	/* handle NULL head pointer */
	if (head == NULL)
	{
		return (NULL);
	}

	/* dynamically allocate memory to new_node */
	new_node = malloc(sizeof(listint_t));

	/* handle memory allocation failure */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* assign the value of 'n' to new_node */
	new_node->n = n;

	/* make new_node point to the current head of the list */
	new_node->next = *head;

	/* update the head of the list to point to new_node */
	*head = new_node;

	return (new_node);
}
