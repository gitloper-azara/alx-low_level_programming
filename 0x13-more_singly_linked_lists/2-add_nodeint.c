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
	/* declare a add_node pointer */
	listint_t *add_node;

	/* handle NULL head pointer */
	if (head == NULL)
	{
		return (NULL);
	}

	/* dynamically allocate memory to add_node */
	add_node = malloc(sizeof(listint_t));

	/* handle memory allocation failure */
	if (add_node == NULL)
	{
		return (NULL);
	}

	/* assign the value of 'n' to add_node */
	add_node->n = n;

	/* make add_node point to the current head of the list */
	add_node->next = *head;

	/* update the head of the list to point to add_node */
	*head = add_node;

	return (add_node);
}
