#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: singly linked list header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%u\n", h->n);
		h = h->next;
	}
	return (i);
}
