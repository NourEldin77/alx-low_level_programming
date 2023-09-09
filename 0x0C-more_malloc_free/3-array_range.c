#include "main.h"
/**
 * array_range - create array of int
 * @min: from
 * @max: two
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i, *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
