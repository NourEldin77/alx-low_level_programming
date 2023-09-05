#include "main.h"
/**
 * create_array - create arr of chars
 * @size: size of arr
 * @c: char
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		p[x] = c;
	}
	return (p);
}
