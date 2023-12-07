#include "lists.h"

/**
 * print_dlistint - a function that prints the data of a doubly linked
 * list
 * @h: pointer to the head of the d linked list
 * Return: Always 0
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t numDigits = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		numDigits++;
	}

	return (numDigits);
}
