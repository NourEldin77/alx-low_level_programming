#include "main.h"
/**
 * _puts - print somthing
 * @str: something to be printed
 * Return: Always (0) Sucess
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
