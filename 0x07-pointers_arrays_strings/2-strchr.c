#include "main.h"
/**
 * _strchr - find char at string
 * @s: string
 * @c: char we want to find
 * Return: char or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
