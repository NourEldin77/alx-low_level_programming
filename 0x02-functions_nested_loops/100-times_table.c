#include "main.h"
/**
 * print_times_table - print times table until n
 * @n: int
*/
void print_times_table(int n)
{
	int x, y, z;

	if (!(n < 0) && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y <= n && y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (z <= 9 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar((z / 10) % 10 + '0');
				}
				else if (z >= 10 && z <= 99)
				{
					_putchar(' ');
					_putchar('0' + z / 10);
				}
				_putchar('0' + z % 10);
			}
			_putchar('\n');
		}
	}
}
