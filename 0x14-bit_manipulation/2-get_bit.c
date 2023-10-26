#include "main.h"

/**
 * get_bit - git if bit have value of a given index
 * @n: number to search
 * @index: position
 * Return: 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	const unsigned int max = (sizeof(unsigned long int) * 8);

	if (index > max)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
