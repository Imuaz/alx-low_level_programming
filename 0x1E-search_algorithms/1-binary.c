#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *  using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size:  Number of elements in the array
 * @value: Value to search for
 * Return: The index where the value is located, or -1 if not found
 * or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_idx, right_idx, mid_idx, i;

	left_idx = 0;
	right_idx = size - 1;

	if (array == NULL)
		return -1;/*Invalid array*/

	while (right_idx >= left_idx)
	{
		/*Print the current subarray being searched*/
		printf("Searching in array: ");
		i = left_idx;
		while (i < right_idx)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[right_idx]);

		/*Calculate the middle index of the current subarray*/
		mid_idx = left_idx + (right_idx - left_idx) / 2;

		/*Check if the value is found at the middle index*/
		if (array[mid_idx] == value)
		{
			return (mid_idx);/*Found the value at index mid_idx*/
		}
		/*If the middle value is greater
		 * than the target value, search the left half
		 */
		if (array[mid_idx] > value)
		{
			right_idx = mid_idx - 1;
		} 
		/*If the middle value is less than the target value, search the right half*/
		else
		{
			left_idx = mid_idx + 1;
		}
	}

	return (-1); /*Value not found*/
}
