#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * and returns the head's node's data (d)
 * @head: Double pointer to the head of the list
 *
 * Return: The data (d) of the head node, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	/* create a temporary pointer to store the head node */
	listint_t *temp = *head;

	/* get the data(d) of the head node */
	int d = temp->n;

	/* check if the list is empty */
	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	/* move the head pointer to the next node */
	*head = (*head)->next;

	/* free the head node */
	free(temp);

	return (d);
}
