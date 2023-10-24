#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index of
 * a listint_t linked list
 * @head: double pointer to the content of the memory location pointed to by
 * the pointer held by head
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if succeeded, or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *currentNode, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	currentNode = *head;

	for (i = 0; currentNode && i < index - 1; i++)
		currentNode = currentNode->next;
	if (currentNode == NULL || currentNode->next == NULL)
		return (-1);
	temp = currentNode->next;
	currentNode->next = temp->next;
	free(temp);
	return (1);
}
