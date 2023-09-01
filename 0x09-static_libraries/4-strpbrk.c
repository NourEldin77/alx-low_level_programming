#include "main.h"
/**
 * _strpbrk - search for any mathced chars from provided string
 * @s: string
 * @accept: to be serached
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		int found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			return (s);
		}

		s++;
	}
	return (NULL);
}
