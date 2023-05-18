#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *         using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the arry
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 *         or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);  /*Invalid array*/

	while (high >= low)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return ((int)pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
