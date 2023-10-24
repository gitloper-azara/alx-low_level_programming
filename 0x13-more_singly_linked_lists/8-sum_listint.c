#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: pointer to the head node
 *
 * Return: sum total, or NULL if list is empty
 */

int sum_listint(listint_t *head)
{
	int sumDigits;

	if (head == NULL)
		return (0);

	sumDigits = 0;
	while (head)
	{
		sumDigits += head->n; /* add data to the sum */
		head = head->next; /* move on to the next node */
	}
	return (sumDigits);
}
