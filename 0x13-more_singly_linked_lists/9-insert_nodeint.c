#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in
 * the list
 * @head: Double pointer to the head of the list
 * @idx: index where the new node should be added.
 * @n: value to be stored in the new node
 * Return: address of the new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL) /* check if head is NULL */
		return (NULL);

	/* create a new node and allocate memory for it */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) /* check for memory allocation failure */
		return (NULL);

	new_node->n = n; /* set the data of new_node to n */
	new_node->next = NULL; /* set the next pointer to NULL */

	if (idx == 0) /* insert at the beginning of the list */
	{
		new_node->next = *head; /*
					 * make the new node point to the
					 * current head
					 */
		*head = new_node; /* update the head to point to new_node */
		return (new_node);
	}
	/* find the node at the position idx-1 */
	current_node = *head;
	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;
	/* if idx is greater than current number of nodes */
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* insert new_node between current_node and current_node->next */
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
