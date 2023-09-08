#include "main.h"

/**
 * _strlen - get length of string
 * @s: string
 * Return: num
 */
unsigned int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL)
	{
		return (0);
	}
	for (i = 0;*s != '\0'; ++s)
	{
		++i;
	}
	return (i);
}

/**
 * string_nconcat - cat with n byte from s2
 * @s1: first string
 * @s2: second string
 * @n: n byte
 * Return: Fails (NULL) or Success (char pointer)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, len1, len2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
		n=0;
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
	{
	c = malloc(len1 + n + 1);
	}
	else
	{
		c = malloc(len1 + len2 + 1);
	}
	if (!c)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0' ; i++)
	{
		c[i] = s1[i];
	}
	if (n >= len2)
	{
		for (x = 0; s2[x] != '\0'; x++)
		{
			c[i + x] = s2[x];
		}
	}
		for (x = 0; x < n && s2[x] != '\0' ; x++)
		{
			c[i + x] = s2[x];
		}
	c[i + x] = '\0';
	return (c);
}
