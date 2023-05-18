#include <stdio.h>

int bin_search(int *array, size_t left, size_t right, int value);
/**
 * Searches for a value in a sorted array of integers using the Exponential search algorithm.
 *
 * @param array Pointer to the first element of the array to search in
 * @param size  Number of elements in the array
 * @param value Value to search for
 * @return The index where the value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, left, right;

	if (array == NULL || size == 0)
	{
		return (-1);/*Invalid array or empty array*/
	}
	
	idx = 1;
	while (idx < size && array[idx] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}
	
	left = idx / 2;
	right = (idx < size) ? idx : size - 1;
	
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	
	return (bin_search(array, left, right, value));
}

/**
 * bin_search - Searches using binary search.
 *
 * @array: A pointer to the first element of the array to search.
 * @left:  The starting index.
 * @right: The ending index.
 * @value: The value to search for.
 * Return: The index where the value is located, or -1 if not found or
 * array is NULL.
 */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t index, mid;

	if (array == NULL)
	{
		return (-1); /*Invalid array*/
	}
	
	while (right >= left)
	{
		printf("Searching in array: ");
		index = left;
		while (index < right)
		{
			printf("%d, ", array[index]);
			index++;
		}
		printf("%d\n", array[right]);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1); /*Value not found*/
}
