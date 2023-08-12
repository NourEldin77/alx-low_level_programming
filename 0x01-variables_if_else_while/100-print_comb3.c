#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int y;

	for (i = 0; i <= 8; i++)
	{
		for (y = i + 1; y <= 9; y++)
		{
			putchar('0' + i);
			putchar('0' + y);
			if (i < 8 || y < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

