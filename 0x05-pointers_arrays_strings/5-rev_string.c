#include "main.h"
/**
 * rev_string - rev str
 * @s: str
 * Return: Always (0) Success
 */

void rev_string(char *s)
{
	int n = 0;
	int i, j;
	char k;

	while (s[n] != '\0')
	{
		n++;
	}
	j = n - 1;
	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
