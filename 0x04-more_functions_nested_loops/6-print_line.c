#include "main.h"
/**
 * print_line - printing number of lines
 * @n: int determinate how many line will be printed
 * Return: (0)
 */

void print_line(int n)
{
	int i = 0;

	while (n > i)
	{
		_putchar(95);
		i++;
	}
	_putchar('\n');
}
