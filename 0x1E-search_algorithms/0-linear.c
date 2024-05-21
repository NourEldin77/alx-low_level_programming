#include "search_algos.h"
/**
 * linear_search - search for number in array of nums
 * @array: array to search in
 * @size: length of array
 * @value: value to search in the the array
 * Return: on (success) the first index value found on it on (failure) -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
