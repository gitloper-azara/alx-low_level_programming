#include "lists.h"

/**
 * free_dlistint - a function that frees a dlisint_t list
 * @head: head of the d linked list
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp;

    if (!head)
        return (NULL);

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
