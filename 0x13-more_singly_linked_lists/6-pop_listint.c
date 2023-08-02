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
	listint_t *temp;
	int d;

	/* check if the list is empty */
	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	/* store the current head node */
	temp = *head;

	/* get the data (d) from the head node */
	d = temp->n;

	/* move the head pointer to the next node */
	*head = temp->next;

	/* free the head node */
	free(temp);

	/* return the data (d) of the old head node */
	return (d);
}
