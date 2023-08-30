#include "main.h"
/**
 * _strstr - locates a subsring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		int i = 0;
		int found = 1;

		while (needle[i] != '\0')
		{
			if (haystack[i] != needle[i])
			{
				found = 0;
				break;
			}
			i++;
		}

		if (found)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
