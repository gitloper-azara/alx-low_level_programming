#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data of a dlistint
 * linked list
 * @head: head pointer of the dlistint linked list
 * Return: sum of all data, or 0 if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *currentNode;
    int sum = 0;

    if (!head)
        return (sum);

    currentNode = head;
    while(currentNode)
    {
        sum = sum + currentNode->n;
        currentNode = currentNode->next;
    }
    return (sum);
}
