#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer to a pointer to the head of the list
 * @n: Value to be assigned to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare new_node pointer and a pointer to traverse the list */
	listint_t *new_node, *temp;

	/* check if the head pointer is NULL */
	if (head == NULL)
		return (NULL);

	/* dynamically allocate memory for new_node */
	new_node = malloc(sizeof(listint_t));
	/* check if memory allocation was successful */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* assign the value of 'n' to new_node */
	new_node->n = n;
	/*
	 * set the next pointer of new_node to NULL (since it'll be the last
	 * node)
	 */
	new_node->next = NULL;

	/* if the list is empty, make new_node the head of the list */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* make the last node's next pointer point to new_node */
		temp->next = new_node;
	}
	return (new_node);
}
