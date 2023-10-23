#include "lists.h"

/**
 * listint_len - a function that returns the number of elements in a linked
 * listint_t list.
 * @h: pointer to the head node.
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numDigits = 0;

	while (h)
	{
		numDigits++;
		h = h->next;
	}
	return (numDigits);
}
