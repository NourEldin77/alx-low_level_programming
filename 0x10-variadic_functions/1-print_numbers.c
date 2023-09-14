#include "variadic_functions.h"
/**
 * print_numbers - print arg with separator
 * @separator: string separator
 * @n: arg num
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pa;
	unsigned int i = 0;
	int printer;

	va_start(pa, n);
	while (i < n)
	{
		printer = va_arg(pa, int);
		printf("%d", printer);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
}

