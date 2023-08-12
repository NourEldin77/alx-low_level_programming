#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		if (i < 97)
		{
			break;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
