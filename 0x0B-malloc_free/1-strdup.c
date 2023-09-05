#include "main.h"
/**
 * _strdup - cpystr
 * @str: str
 * Return: char
 */
char *_strdup(char *str)
{
	int i = 1, x = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 1; x < i; x++)
	{
		p[x] = str[x];
	}
	p[x] = '\0';
	return (p);
}
