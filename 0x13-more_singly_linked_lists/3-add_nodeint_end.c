#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of a
 * listint_t list
 * @head: double pointer to the content of the memory location pointed to
 * by the pointer held by head
 * @n: data to insert into the double pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addNode, *temp;

	if (head == NULL)
		return (NULL);

	addNode = malloc(sizeof(listint_t));
	if (addNode == NULL)
		return (NULL);

	addNode->n = n;
	addNode->next = NULL;

	if (*head == NULL)
		*head = addNode;
	else
	{
		temp = *head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = addNode;
	}
	return (addNode);
}
