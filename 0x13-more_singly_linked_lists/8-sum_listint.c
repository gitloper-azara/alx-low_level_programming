#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: sum of all the data in the list, 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum;

	/* handle an empty head */
	if (head == NULL)
	{
		return (0);
	}

	sum = 0;
	/* traverse the list and add up the data of each node */
	while (head != NULL)
	{
		sum = sum + head->n; /* add the data to the sum */
		head = head->next; /* move to the next node */
	}
	return (sum); /* return the total sum */
}
