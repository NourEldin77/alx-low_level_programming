#include "main.h"

/**
 * print_binary - convert from dec to bin
 * @n: decimal num
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeros;

	if (n == 0)
	{
		_putchar('0');
	}
	while (m > 0)
	{
		if ((n & m) > 0)
		{
			leading_zeros = 0;
		}
		if (!leading_zeros)
		{
			_putchar('0' + ((n & m) > 0));
		}
		m >>= 1;
	}
}
