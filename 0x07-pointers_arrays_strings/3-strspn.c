#include "main.h"
/**
 * _strspn - gets length of substring prefix
 * @s: string
 * @accept: substring
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	int i;

	while (*s != '\0')
	{
		int found = 0;

		for (i = 0; accept[i] != '\0'; i++)
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
