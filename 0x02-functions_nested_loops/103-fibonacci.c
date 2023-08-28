#include "main.h"
/**
 * main - prints first 50 number of  Fibonacci numbers
 * Return: Always (0) Success
 */
int main(void)
{
	unsigned long int i = 0, num1 = 0, num2 = 1;
	unsigned long int fibonacci, evenSum = 0;

	while (i <= 33)
	{
		if (num1 < 4000000 && num1 % 2 == 0)
		{
			evenSum = evenSum + num1;
		}
		fibonacci = num1 + num2;
		num1 = num2;
		num2 = fibonacci;
		i++;
	}
	printf("%lu", evenSum);
	putchar('\n');
	return (0);
}
