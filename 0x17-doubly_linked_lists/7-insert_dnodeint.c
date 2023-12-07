#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a node at a given
 * position or index
 * @h: double pointer to the content of the memory location pointed
 * to by the pointer held by head
 * @idx: index to insert node at
 * @n: data to insert at index
 * Return: address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *currentNode;
	unsigned int index;

	if (!h)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		*h = newNode;
		return (newNode);
	}

	currentNode = *h;
	for (index = 0; currentNode && index < idx - 1; index++)
		currentNode = currentNode->next;
	if (!currentNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
