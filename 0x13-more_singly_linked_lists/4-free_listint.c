#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	/* create a temporary pointer to store the current node */
	listint_t *temp;

	/* loop through the list and free each node */
	while (head != NULL)
	{
		/* store the current node in temp */
		temp = head;
		/* move the head pointer to the next node */
		head = head->next;
		/* free the current node */
		free(temp);
	}
}
