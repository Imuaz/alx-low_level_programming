#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return:the number of unique nodes in the list or 0 if the list is not looped
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *current, *new;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	new = (head->next)->next;

	while (new)
	{
		if (current == new)
		{
			current = head;
			while (current != new)
			{
				nodes++;
				current = current->next;
				new = new->next;
			}

			current = current->next;
			while (current != new)
			{
				nodes++;
				current = current->next;
			}

			return (nodes);
		}

		current = current->next;
		new = (new->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - frees a listint_t list safely.
 * @h: a pointer to address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, idx;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (idx = 0; idx < nodes; idx++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
