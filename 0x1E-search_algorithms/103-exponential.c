#include "search_algos.h"

int bin_search(int *array, size_t left, size_t right, int value);
/**
 * exponential_search - Searches for a value in a sorted array of integers
 *        using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 *        or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, right;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] != value)
	{
		idx = 1;
		while (idx < size && array[idx] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
			idx = idx * 2;
		}
	}

	if (idx < size)
		right = idx;
	else
		right = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, right);

	return (bin_search(array, idx / 2, right, value));
}

/**
 * bin_search - Searches using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @left:  The starting index.
 * @right: The ending index.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found or
 *        array is NULL.
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");

		idx = left;
		while (idx < right)
		{
			printf("%d, ", array[idx]);
			idx++;
		}
		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}
	return (-1);
}
