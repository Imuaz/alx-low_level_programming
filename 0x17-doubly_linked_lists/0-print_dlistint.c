#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (elements);
}
