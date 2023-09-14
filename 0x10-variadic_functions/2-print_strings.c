#include "variadic_functions.h"
/**
 * print_strings - print arg with separator
 * @separator: string separator
 * @n: arg num
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i = 0;
	char *c;

	va_start(pa, n);
	while (i < n)
	{
		c = va_arg(pa, char*);
		printf("%s", c != NULL ? c : "(nil)");
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}

