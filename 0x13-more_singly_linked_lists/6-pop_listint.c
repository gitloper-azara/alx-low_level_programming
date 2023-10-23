#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list
 * @head: double pointer to the content of the memory location pointed to
 * by the pointer held by head
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int d;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	d = temp->n;
	*head = temp->next;
	free(temp);

	return (d);
}
