#include "main.h"

/**
 * _strncat - concatenates two strings untill n
 * @dest: pointer to buffer to add the string
 * @src: pointer to string to be added to buffer
 * @n: number of bytes to copy
 * Return: pointer to the buffer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr_dest = dest, *ptr_src = src;
	int src_len = 0;

	while (*src != '\0')
	{
		src_len++;
		src++;
	}
	src = ptr_src;
	n > src_len ? n = src_len : n;
	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';
	return (ptr_dest);
}

