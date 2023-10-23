#include "lists.h"

/**
 * free_listint - afunction that frees a listint_t list
 * @head: pointer to the head node.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
