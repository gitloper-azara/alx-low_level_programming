#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the list
 */

void free_listint2(listint_t **head)
{
	/* create a temporary pointer to store the current node */
	listint_t *temp;

	/* check if head is NULL */
	if (head == NULL)
	{
		return;
	}

	/* loop through the list and free each node */
	while (*head != NULL)
	{
		/* store the current node in temp */
		temp = *head;
		/* move the head pointer to the next node */
		*head = (*head)->next;
		/* free the current node */
		free(temp);
	}
	/* set the head to NULL to indicate that the list is now empty */
	*head = NULL;
}
