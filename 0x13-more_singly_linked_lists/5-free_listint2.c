#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head:pointer to head of list to br freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
