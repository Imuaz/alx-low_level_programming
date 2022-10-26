#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: an address pointer to the head of the list_t list.
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *begin, *end;

	if (head == NULL || *head == NULL)
		return (NULL);

	end = NULL;

	while ((*head)->next != NULL)
	{
		begin = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = begin;
	}

	(*head)->next = end;

	return (*head);
}
