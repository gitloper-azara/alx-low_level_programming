#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t
 * list.
 * @h: pointer to the head node.
 *
 * Return: counted number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t numDigits = 0;

	while (h != NULL)
	{
		numDigits++;
		h = h->next;
	}

	return (numDigits);
}
