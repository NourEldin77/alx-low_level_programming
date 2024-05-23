#include "search_algos.h"

/**
 * binary_search - search value in sorted array
 * @array: array to search on
 * @size: length of array
 * @value: value to search
 * Return: on SUCCESS (value index) found on it on FAILURE (-1)
 */


int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, m, i;

	if (array == NULL || size < 1)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		m = left + (right - left) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		if (array[m] < value)
		{
			left = m + 1;
		}
		else
		{
			right = m - 1;
		}
	}
	return (-1);
}
