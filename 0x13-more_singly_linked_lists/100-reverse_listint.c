#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer to the content of the memory location pointed to by
 * the pointer held by head
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentNode = NULL;
	listint_t *nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = currentNode;
		currentNode = *head;
		*head = nextNode;
	}
	*head = currentNode;

	return (*head);
}
