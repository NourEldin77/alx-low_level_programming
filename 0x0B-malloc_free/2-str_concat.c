#include "main.h"
/**
 * str_concat - cat two str
 * @s1: str1
 * @s2: str2
 * Return: cat str1 and str2
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, i = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	while (*(s1 + x))
		x++;
	while (*(s2 + y))
		y++;
	i = x + y;
	c = malloc((sizeof(char) * i) + 1);
	if (c == NULL)
		return (NULL);
	y = 0;
	while (z < i)
	{
		if (z <= x)
			*(c + z) = *(s1 + z);
		if (z >= x)
		{
			*(c + z) = *(s2 + y);
			y++;
		}
	}
		z++;
	*(c + z) = '\0';
	return (c);
}


