#include "main.h"
/**
 * print_rev - rev str
 * @s: str tp be rev
 * Retrun: Always (0) Success
 */

void print_rev(char *s)
{
	int a;
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
