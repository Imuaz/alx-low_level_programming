#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: head of the list
 * @index: the index of the node start at 0
 * Return: 1 is success els -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current = *head;
	unsigned int idx;

	if (!current)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (idx = 0; idx < (index - 1); idx++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
