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
	int low, high, mid, index;

	low = 0;
	high = size - 1;

	if (array == NULL)
		return (-1);  /*Invalid array*/

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		index  = low; 
		while (index <= high)
		{
			printf("%d, ", array[index]);
			index++;
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid); /*Found the value at index mid*/
		}
		else if (array[mid] < value)
		{
			low = mid + 1; /*Search the right half of the array*/
		}
		else
		{
			high = mid - 1;  /*Search the left half of the array*/
		}
	}
	return (-1); /*Value not found*/
}
