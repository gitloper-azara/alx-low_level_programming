#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * dlistint_t linked list
 * @head: head pointer of the node
 * @index: index to retrieve node data from
 * Return: Retrieved node, or NULL if the node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int idx = 0;

	if (!head)
		return (NULL);

	currentNode = head;
	while (currentNode)
	{
		if (idx == index)
			return (currentNode);
		currentNode = currentNode->next;
		idx++;
	}

	return (NULL);
}
