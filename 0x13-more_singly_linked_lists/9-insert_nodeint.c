#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address pointer of the head of the listint_t list.
 * @index: index of the list to insert node
 * @n: interger of the node inserted
 * Return: the address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (index == 0)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	while (index > 1)
	{
		*head = *head->next;
		index--;
		if (!*head)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = *head->next;
	*head->next = node;
	return (node);
}
