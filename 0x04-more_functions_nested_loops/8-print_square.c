#include "main.h"
/**
 * print_square - print square of hashes
 * @size: size of square
 * Return: (0)
 */

void print_square(int size)
{
	int i = 0;
	int	j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (size > i)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
		i++;
	}
}
