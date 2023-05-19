#include "search_algos.h"

int binary_search_recursive(int *array, int left, int right, int value);
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
	int left = 0;
	int right = (int)size - 1;

	return (binary_search_recursive(array, left, right, value));
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
int binary_search_recursive(int *array, int left, int right, int value)
{
	int mid, idx, result;

	if (array == NULL || left > right)
		return (-1);

	mid = left + (right - left) / 2;
	idx = left;
	printf("Searching in array: ");

	while (idx < right)
	{
		printf("%d, ", array[idx]);
		idx++;
	}
	printf("%d\n", array[right]);

	if (array[mid] == value)
	{
		result = binary_search_recursive(array, left, mid - 1, value);
		if (result == -1)
			return (mid);
		return (result);
	}
	else if (array[mid] < value)
		return (binary_search_recursive(array, mid + 1, right, value));
	else
		return (binary_search_recursive(array, left, mid - 1, value));
}
