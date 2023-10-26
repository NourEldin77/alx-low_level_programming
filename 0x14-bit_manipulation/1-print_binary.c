#include "main.h"

int get_remainder(unsigned long int number, int divisor);

/**
 * get_remainder - gets remainder
 * @number: num
 * @divisor: div
 * Return: int
 */

int get_remainder(unsigned long int number, int divisor)
{
	return (number & (divisor - 1));
}

/**
 * print_binary - convert from dec to bin
 * @n: decimal num
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar(get_remainder(n, 2) ? '1' : '0');
}

