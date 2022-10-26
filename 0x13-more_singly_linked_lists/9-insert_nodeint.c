#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address pointer of the head of the listint_t list.
 * @idx: index of the list to insert node
 * @n: interger of the node inserted
 * Return: the address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current = *head;
	unsigned int index;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = current;
		*head = node;
		return (node);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
	}

	node->next = current->next;
	current->next = node;

	return (node);
}
