#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers using the
 *        Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * 
 * Return: a pointer to the first node where value is located, NULL If value
 *         is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step_size, step;
	listint_t *node, *jump;

	step = 0;
	node = jump = list;
	step_size = sqrt(size);

	if (list == NULL || size == 0)
		return (NULL);

	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		step += step_size;
		while (jump->index < step)
		{
			if (jump->index + 1 == size)
				break;
			jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->
			index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
