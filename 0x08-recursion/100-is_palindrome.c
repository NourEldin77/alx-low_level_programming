#include "main.h"
/**
 * is_palindrome - return 1 if string is palindrome
 * @s: string to be checked
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (_ispalindRec(s, s + length - 1));
}

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _ispalindRec - check string start and end if equal return 1 else 0
 * @s: start
 * @e: end
 * Return: 1 or 0
 */
int _ispalindRec(char *s, char *e)
{
	if (s >= e)
	{
		return (1);
	}
	else if (*s != *e)
	{
		return (0);
	}
	return (_ispalindRec(s + 1, e - 1));
}
