#include "main.h"
/**
 * _atoi - convert input to int
 * @s: pointer to input
 * Return: (0) or int
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	unsigned int signMe = 1;

	while (*s)
	{
		if (*s == '-')
		{
			signMe = -signMe;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (num * signMe);
}
