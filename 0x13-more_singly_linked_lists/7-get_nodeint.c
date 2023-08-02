#include "lists.h"

/**
 * get_nodeint_at_index -Returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 *
 * Return: Pointer to the nth node, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* declare an iterator to keep track of the current index */
	unsigned int i = 0;
	/* pointer to traverse the list */
	listint_t *current_node;

	/* traverse the list starting from the head */
	current_node = head;
	/*
	 * loop through the list until we reach the desired index
	 * or the end
	 */
	while (current_node != NULL)
	{
		if (i == index)
		{
			return (current_node);
		}
		/* move to the next node in the list */
		current_node = current_node->next;
		i++;
	}
	/* if the index is out of range or the list is empty */
	return (NULL);
}
