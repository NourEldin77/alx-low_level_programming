#include "main.h"
/**
 * _memset - fills the meory with byte
 * @s: buffer
 * @b: byte
 * @n: number of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		*(s + i) = b
	}
	return (s);
}
