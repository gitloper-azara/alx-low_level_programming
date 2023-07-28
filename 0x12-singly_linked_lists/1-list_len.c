#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * to stdout
 * @h: head of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t size = 0;

	/* iterate through list_t, count elements and store  */
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
