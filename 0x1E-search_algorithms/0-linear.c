#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array:pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: The index of the first occurrence of the value in the array.
 *         If the value is not present in the array or if the
 *         array is NULL, returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	index = 0;
	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
