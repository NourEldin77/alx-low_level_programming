#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to buffer to add the string
 * @src: pointer to string to be added to buffer
 * Return: pointer to the buffer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	char *ptr_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	dest[dest_len] = '\0';
	return (ptr_dest);
}
