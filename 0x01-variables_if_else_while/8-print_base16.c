#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int ch;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
