#include "lists.h"
#include <stddef.h>

/**
 * list_len - finds the number of elements in
 * a linked list_t
 * @h: singly linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
