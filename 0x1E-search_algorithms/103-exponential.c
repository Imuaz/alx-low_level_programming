#include <stdio.h>

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *        using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found or
 *        array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, left, right, mid, idx;

	if (array == NULL || size == 0)
	{
		return (-1);/*Invalid array or empty array*/
	}
	if (array[0] == value)
	{
		return (0);/*Value found at the first index*/
	}
	bound = 1;
	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	left = bound / 2;
	right = (bound < size) ? bound : size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
		{
			printf("%d, ", array[idx]);
		}
		printf("%d\n", array[right]);
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1); /*Value not found*/
}
