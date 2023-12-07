#include "lists.h"

/**
 * dlistint_len - a function that returns the number elements in
 * a doubly linked list
 * @h: pointer to the head of the d linked list
 * Return: Always 0
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t numDigits = 0;

	while (h)
	{
		h = h->next;
		numDigits++;
	}

	return (numDigits);
}

/**
 * delete_dnodeint_at_index - a function that deletes the node at a given
 * index of a doubly linked list
 * @head: double pointer to the content of the memory location pointed
 * to by the pointer held by head
 * @index: position to delete
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;
	unsigned int idx;

	if (!head || !(*head))
		return (-1);
	len = dlistint_len(*head);
	if (index >= len)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	if (index == (len - 1))
	{
		while (temp->next)
			temp = temp->next;
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	idx = 0;
	while (temp)
	{
		if (idx == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		idx++;
	}
	return (-1);
}
