#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: element
 * @size: size bytes
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	unsigned int i;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	x = nmemb * size;
	p = malloc(x);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		p[i] = 0;
	}
	return (p);
}
