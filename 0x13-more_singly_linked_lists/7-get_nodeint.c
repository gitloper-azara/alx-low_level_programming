#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * linked list
 * @head: pointer to the head node
 * @index: the index of the node, starting at zero
 *
 * Return: node at index, or NULL if the node at index does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode;
	unsigned int i = 0;

	currentNode = head;
	while (currentNode)
	{
		if (i == index)
			return (currentNode);
		currentNode = currentNode->next;
		i++;
	}
	return (NULL);
}
