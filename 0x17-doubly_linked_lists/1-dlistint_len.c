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
