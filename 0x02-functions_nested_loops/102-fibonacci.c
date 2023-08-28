#include "main.h"
/**
 * main - prints first 50 number of  Fibonacci numbers
 * Return: Always (0) Success
 */
int main(void)
{
	int i = 1;
	int counter = 0;

	while (i <= 50)
	{
		counter += i;
		if (i != 1)
		{
			puts(" ,");
		}
		printf("%d", counter);
		i++;
	}
	putchar('\n');
	return (0);
}
