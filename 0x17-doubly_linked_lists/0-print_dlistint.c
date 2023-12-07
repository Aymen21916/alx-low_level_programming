#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current->prev != NULL)
        {
            current = current->prev;
        }
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}
