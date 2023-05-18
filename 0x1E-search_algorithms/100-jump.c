#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the arry
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 *        or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, step, jump, idx;

	jump = prev = 0;
	step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1); /*Invalid array or empty array*/

	/*Finding the block where the value might be present*/
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		prev = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);

	if (jump >= size)
	{
		jump = size - 1;
	}
	/*Linear search within the identified block*/
	idx = prev;
	while (idx < jump && array[idx] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx++;
	}
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);

	/*Checking if the value is found*/
	if (array[idx] == value)
	{
		return ((int)idx);
	}
	return (-1);  /*Value not found*/
}
