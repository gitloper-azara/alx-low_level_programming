#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 * listint_t list
 * @head: double pointer to the content of the memory location pointed
 * to by the pointer held by head
 * @n: data to insert into the double pointer
 *
 * Return: address of the new element, or NULL if it fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNode;

	if (head == NULL)
		return (NULL);

	addNode = malloc(sizeof(listint_t));
	if (addNode == NULL)
		return (NULL);

	addNode->n = n;
	addNode->next = *head;
	*head = addNode;

	return (addNode);
}
