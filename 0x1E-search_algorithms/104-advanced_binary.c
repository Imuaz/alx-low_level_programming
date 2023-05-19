#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using advanced binary search.
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found or
 * array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}

/**
 * binary_search_recursive - Recursive binary search
 * @array: Array to search
 * @left: Start index
 * @right: End index
 * @value: Value to search for
 *
 * Return: Index where the value is located, or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid_idx, index;

	mid_idx = left + (right - left) / 2;

	if (right < left)
		return (-1);

	printf("Searching in array: ");

	index = left;
	while (index < right)
	{
		printf("%d, ", array[index]);
		index++;
	}
	printf("%d\n", array[right]);

	if (array[mid_idx] == value && (mid_idx == left || array[mid_idx - 1] !=
				value))
		return (mid_idx);
	else if (array[mid_idx] >= value)
		return (binary_search_recursive(array, left, mid_idx, value));
	else
		return (binary_search_recursive(array, mid_idx + 1, right, value));
}
