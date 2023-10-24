#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position
 * @head: double pointer to the content of the memory loaction pointed to by
 * the pointer held by head
 * @idx: index of the list where a new node should be inserted
 * @n: value to be inserted at designated index
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *currentNode;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	for (i = 0; currentNode != NULL && i < idx - 1; i++)
		currentNode = currentNode->next;
	if (currentNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
