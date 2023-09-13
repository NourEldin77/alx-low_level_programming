#include "function_pointers.h"
/**
 * array_iterator - do_something
 * @array: any
 * @size: any
 * @action: any
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
