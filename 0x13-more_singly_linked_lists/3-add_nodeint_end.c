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
	/* declare add_node pointer and a pointer to traverse the list */
	listint_t *add_node, *temp;

	/* check if the head pointer is NULL */
	if (head == NULL)
		return (NULL);

	/* dynamically allocate memory for add_node */
	add_node = malloc(sizeof(listint_t));
	/* check if memory allocation was successful */
	if (add_node == NULL)
	{
		return (NULL);
	}

	/* assign the value of 'n' to add_node */
	add_node->n = n;
	/*
	 * set the next pointer of add_node to NULL (since it'll be the last
	 * node)
	 */
	add_node->next = NULL;

	/* if the list is empty, make add_node the head of the list */
	if (*head == NULL)
	{
		*head = add_node;
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
		temp->next = add_node;
	}
	return (add_node);
}
