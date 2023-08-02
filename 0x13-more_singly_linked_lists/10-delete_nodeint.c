#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node, *temp;

	if (head == NULL || *head == NULL) /* check if the list is empty */
		return (-1);

	if (index == 0) /* delete the first node */
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	current_node = *head;
	/* traverse to the node at position index - 1 */
	for (i = 0; current_node != NULL && i < index - 1; i++)
		current_node = current_node->next;
	/* if index is greater than the current number of nodes */
	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	/* store the next node in temp */
	temp = current_node->next;
	/*
	 * make the current node point to the node after
	 * the one to be deleted
	 */
	current_node->next = temp->next;

	free(temp); /* free memory of node to be deleted */
	return (1);
}
