#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int y;

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (y = j + 1; y <= 9; y++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + y);
				if (i < 7 || j < 8 || y < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
