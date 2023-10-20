#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to the head node.
 *
 * Return: the number of nodes to be printed.
 */

size_t print_list(const list_t *h)
{
	size_t numDigits = 0;

	while (h != NULL)
	{
		numDigits++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (numDigits);
}
