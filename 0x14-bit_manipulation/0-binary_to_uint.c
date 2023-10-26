#include "main.h"

int _pow_recursion(int x, int y);
unsigned int _atoi(char c);

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
 * _atoi - convert input to int
 * @c: char
 * Return: recursion
 */
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}


/**
 * binary_to_uint - converts from bin to unsigned interger
 * @b: pointer to string of binary digits
 * Return: unsigned int (decimal)
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int total = 0, len = 0, num = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		num = _atoi(b[i]);
		if (num != 0 && num != 1)
		{
			return (0);
		}
		if (num == 1)
		{
			total += _pow_recursion(2, len - i - 1);
		}
	}
	return (total);
}
