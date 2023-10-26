#include "main.h"

/**
 * set_bit - set_bit to 1 in given index
 * @n: pointer to the number
 * @index: position
 * Return: 1 on (Sucess) or -1 (Failed)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	const unsigned int max = (sizeof(unsigned long int) * 8);
	int m = 1;

	if (index > max)
	{
		return (-1);
	}
	m <<= index;
	*n = (*n | m);
	return (1);
}
