#include "search_algos.h"

int binary_search_recursive(int *array, size_t left, size_t right, int value);
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
	size_t i, j;

	i = left + (right - left) / 2;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	
	j = left; 
	while (j < right)
	{
		printf("%d, ", array[j]);
		j++;
	}
	printf("%d\n", array[right]);

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	else if (array[i] >= value)
		return (binary_search_recursive(array, left, i, value));
	else
		return (binary_search_recursive(array, i + 1, right, value));
}
