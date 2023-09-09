#include "main.h"
/**
 * _realloc - dosomething
 * @ptr: any
 * @old_size: any
 * @new_size:any
 * Return: nothing void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;
	/** Hard code for edge cases*/
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (!p)
		{
			return (NULL);
		}
		return (p);
	}
	/** main */
	p = malloc(new_size);
	if (!p)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		p[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (p);
}
