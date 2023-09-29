#include "main.h"

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - return the value of x raised to power of y
 * @x: base
 * @y: power to y
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - convert from bin to decimal
 * @b: bin string
 * Return: decimal num
 */

unsigned int binary_to_uint(const char *b)
{
	int d = 0, pow = 0, len = 0, i;

	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			d += _pow_recursion(2, pow);
		}
		pow++;
	}
	return (d);
}
