#include "lists.h"

/**
 * print_list - prints the nodes from list_t
 * @h: head of list
 *
 * Return: number of nodes(elements)
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (size);
}
