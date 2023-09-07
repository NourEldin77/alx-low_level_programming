#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (!p)
	{
		exit(98);
	}
	return (p);
}
