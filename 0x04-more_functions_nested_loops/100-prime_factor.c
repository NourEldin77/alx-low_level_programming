#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i = 3;

	while (i < 782849)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	i += 2;
	}

	printf("%lu\n", n);
	return (0);
}
