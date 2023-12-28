#include "main.h"
/**
 * _strncpy - copy str till n byte
 * @src: source
 * @dest: destination
 * @n: num of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
