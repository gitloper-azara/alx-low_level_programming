#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: double pointer to the content of the memory location pointed to
 * by the pointer held by head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
