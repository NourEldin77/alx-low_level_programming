#include "main.h"
/**
 * times_table - prints times table from 0 to 9 with special format
 * Return: Always (0) Success
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y != 0)
			{
				_putchar(' ');
			}
			if  (z <= 9 && y != 0)
			{
				_putchar(' ');
			}
			if (z >= 10)
			{
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
			else
			{
				_putchar('0' + z);
			}
			if (y < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
