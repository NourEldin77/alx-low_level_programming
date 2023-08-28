#include "main.h"
/**
 * main - prints first 50 number of  Fibonacci numbers
 * Return: Always (0) Success
 */
int main(void)
{
	long long int i = 0, num1 = 0, num2 = 1;
	long long int fibonacci;

	while (i < 50)
	{
		fibonacci = num1 + num2;
		if (fibonacci != 1)
		{
			printf(", %lld", fibonacci);
		}
		else
		{
			printf("%lld", fibonacci);
		}
		num1 = num2;
		num2 = fibonacci;
		i++;
	}
	putchar('\n');
	return (0);
}
