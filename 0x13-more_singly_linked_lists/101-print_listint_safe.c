#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list with a loop
 * @head: pointer to first node
 *
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *front = head, *back = head;
	int i = 0;

	if (!head)
		exit(98);

	while (front && back && back->next)
	{
		front = front->next;
		back = back->next->next;

		if (front == back)
		{
			front = head;

			while (front->next != back->next)
			{
				front = front->next;
				back = back->next;
			}
			while (head)
			{
				if (head == back)
				{
					printf("[%p] %d\n", (void *)head, head->n);
					i++;
					printf("-> [%p] %d\n", (void *)back->next, back->next->n);
					return (i);
				}
				i++;
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}

		}
	}
	i = print_listformat(head);
	return (i);
}

/**
 * print_listformat - prints list format with address
 * @head: pointer to head node
 *
 * Return: nodes in the list
*/
int print_listformat(const listint_t *head)
{
	const listint_t *temp = head;
	int i = 0;

	while (temp)
	{
		i++;
		printf("[%p] %d\n", (void *)temp, temp->n);
		temp = temp->next;
	}

	return (i);
}
