#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: int
 * Return: Always (n) Success
 */
int print_last_digit(int n)
{
int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}

