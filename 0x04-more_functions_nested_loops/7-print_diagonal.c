#include "main.h"
/**
 * print_diagonal - print number of slashes diagonal
 * @n: int number of slashes
 * Return: (0)
 */

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (n > i)
	{
		for (j = 0; i > j; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
}
