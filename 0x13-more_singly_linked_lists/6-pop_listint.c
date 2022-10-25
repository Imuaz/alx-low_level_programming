#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to head address of the listint_t list.
 *
 * Return: The head node's data (n) or 0 if
 * the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ndata;

	if (!*head)
		return (0);

	tmp = *head;
	ndata = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ndata);
}
