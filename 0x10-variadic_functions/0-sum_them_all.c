#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: num of the arg that will be provided
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pa;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(pa, n);
	while (i < n)
	{
		sum += va_arg(pa, int);
		i++;
	}
	va_end(pa);
	return (sum);
}
