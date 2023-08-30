#include "main.h"
/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: the char to search
 * Return: number of matched
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;

	while (*s != '\0')
	{
		int found = 0;

		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				counter++;
				s++;
				break;
			}
		}
		if (!found)
		{
			break;
		}
	}

	return (counter);
}
