#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of
 * a d linked list
 * @head: double pointer to the content of the memory location pointed
 * to by the pointer held by head
 * @n: data to insert into the double pointer
 * Return: the address of the new element, ot NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addNode;

	if (!head)
		return (NULL);

	addNode = malloc(sizeof(dlistint_t));
	if (!addNode)
		return (NULL);

	addNode->n = n;
	addNode->next = *head;
	*head = addNode;

	return (addNode);
}
